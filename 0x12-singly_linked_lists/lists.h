#ifndef LISTS_H
#define LISTS_H
int _putchar(char c);
/**
 * struct Node - Struct
 *
 * @str: Parameter1
 * @len: Parameter2
 * @next: PArameter3
*/
typedef struct Node
{
	char *str;
	int len;
	struct Node *next;
} list_t;

size_t print_list(const list_t *h);
#endif
