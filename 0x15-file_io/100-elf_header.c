#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check(unsigned char *buff);
void Magic(unsigned char *buff);
void Class(unsigned char *buff);
void Data(unsigned char *buff);
void Version(unsigned char *buff);
void OS_ABI(unsigned char *buff);
void ABI_Version(unsigned char *buff);
void Type(unsigned int e_type, unsigned char *buff);
void Entry(unsigned long int e_entry, unsigned char *buff);
void closee(int s);

/**
 * check - Check if ELF or not
 *
 * @buff: Parameter
*/
void check(unsigned char *buff)
{
	if (buff[0] != 127 || buff[1] != 'E' || buff[2] != 'L' || buff[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
}

/**
 * closee - Closes
 *
 * @s: Parameter
*/
void closee(int s)
{
	int w;

	w = close(s);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close this file\n");
		exit(98);
	}
}

/**
 * Magic - Print Magic
 *
 * @buff: Parameter
*/
void Magic(unsigned char *buff)
{
	int s;

	printf("  Magic:   ");
	for (s = 0; s < EI_NIDENT; s++)
	{
		printf("%02x", buff[s]);
		if (s == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
			printf(" ");
	}
}

/**
 * Class - Print class
 *
 * @buff: Parmaeter
*/
void Class(unsigned char *buff)
{
	printf("  Class:                             ");
	if (buff[EI_CLASS] == ELFCLASSNONE)
	{
		printf("none\n");
	}
	else if (buff[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
	}
	else if (buff[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
	}
}

/**
 * Data - Print data
 *
 * @buff: Parameter
*/
void Data(unsigned char *buff)
{
	printf("  Data:                              ");
	switch (buff[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		exit(98);
	}
}

/**
 * Version - Print version
 *
 * @buff: Parameter
*/
void Version(unsigned char *buff)
{
	printf("  Version:                           %d", buff[EI_VERSION]);

	switch (buff[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * OS_ABI - Print OS_ABI
 *
 * @buff: Parameter
*/
void OS_ABI(unsigned char *buff)
{
	printf("  OS/ABI:                            ");
	switch (buff[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		exit(98);
	}
}

/**
 * ABI_Version - Print ABI Version
 *
 * @buff: Parameter
*/
void ABI_Version(unsigned char *buff)
{
	printf("  ABI Version:                       %d\n", buff[EI_ABIVERSION]);
}

/**
 * Type - Print type
 *
 * @buff: Parameter1
 * @e_type: Parameter2
*/
void Type(unsigned int e_type, unsigned char *buff)
{
	if (buff[EI_DATA] == ELFDATA2MSB)
	{
		e_type >>= 8;
	}
	printf("  Type:                              ");
	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		exit(98);
	}
}

/**
 * Entry_point_address - Print Entry
 *
 * @buff: Parameter1
 * @e_entry: Parameter2
*/
void Entry_point_address(unsigned long int e_entry, unsigned char *buff)
{
	printf("  Entry point address:               ");
	if (buff[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (buff[EI_CLASS] == ELFCLASS32)
	{
		printf("%#x\n", (unsigned int)e_entry);
	}
	else
	{
		printf("%#lx\n", e_entry);
	}
}

/**
 * main - Main
 *
 * @argc: Parameter1
 * @argv: Parmeter2
 *
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
	int s, d;
	Elf64_Ehdr *buff;
	unsigned long int a;

	(void)argc;
	s = open(argv[1], O_RDONLY);
	if (s == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read this file\n");
		exit(98);
	}
	buff = malloc(sizeof(Elf64_Ehdr));
	if (buff == NULL)
	{
		closee(s);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	d = read(s, buff, sizeof(Elf64_Ehdr));
	if (d == -1)
	{
		free(buff);
		dprintf(STDERR_FILENO, "Error: Can't read this file\n");
		exit(98);
	}
	a = buff->e_entry;
	check(buff->e_ident);
	Magic(buff->e_ident);
	Class(buff->e_ident);
	Data(buff->e_ident);
	Version(buff->e_ident);
	OS_ABI(buff->e_ident);
	ABI_Version(buff->e_ident);
	Type(buff->e_type, buff->e_ident);
	Entry_point_address(a, buff->e_ident);
	free(buff);
	closee(s);
	return (0);
}
