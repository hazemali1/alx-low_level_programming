#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

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
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
#endif
