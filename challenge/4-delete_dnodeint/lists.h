#ifndef B01F534B_C4CB_4700_994F_C6821D57237D
#define B01F534B_C4CB_4700_994F_C6821D57237D
#ifndef A0C0B3CE_322B_48F4_B7E1_B45D120068D3
#define A0C0B3CE_322B_48F4_B7E1_B45D120068D3
#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the prev node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
void free_dlistint(dlistint_t *head);

#endif


#endif11/* A0C0B3CE_322B_48F4_B7E1_B45D120068D3 */


#endif11/* B01F534B_C4CB_4700_994F_C6821D57237D */
