#include <stdio.h>
#include <stdlib.h>

 struct lecture3 {
	  int data1;
	  struct lecture3 *next;
};
/*The place og the number that you want to insert another item - 
0 - at the start
-1 - at the end*/ 
void ListAdd (struct lecture3 **list, int place, int data1)
{
	struct lecture3 *new_element, *head;
	
	new_element = (struct lecture3*) malloc (sizeof (struct lecture3));
	new_element->data1 = data1;
	
	if (!*list)
	{
		new_element->next = NULL;
		*list = new_element;
	}
	else
		if (!place) 
		{
			new_element->next = *list;
			*list = new_element;
		}
	else
		{
			for (head = *list; --place && head->next; head = head->next);
			new_element->next = head->next;
			head->next = new_element;
		}
}

int ElementRemove (struct lecture3 **list, int place)
{
	struct lecture3 *element, *head;
	
	if (!(*list)->next)
		if (!place) //sequence number from 0 to ...
		{
			element = *list;
			*list = NULL;
		}
	else
		return 0; //exit out of border of the linked list
	else
		if (!place)
		{
			element = *list;
			*list = element->next;
		}
		else
		{
			for (head = *list; --place && head->next; head = head->next);
			if (!head->next)
			return 0;
			element = head->next;
			head->next = element->next;
		}
	
	free (element);
	return 1; //successful deleting
}

int ListIs (struct lecture3 **list, int place, int *data1)
{
	struct lecture3 *head;
	
	for (head = *list; place-- && head; head = head->next);
	if (!head)
	return 0; //exit out of border of the linked list
	
	*data1 = head->data1;
	
	return 1; //element is present
}

void ListRemove (struct lecture3 **list)
{
	while (*list)
	ElementRemove (list, 0);
}

int main (void)
{
	struct lecture3 *list = NULL;
	int a;
	
	ListAdd (&list, 25, 1);
	ListAdd (&list, 26, 2);
	ListAdd (&list, -10, 3);
	ListAdd (&list, 100,  4);
	
	ListIs (&list, 3, &a);
	
	ElementRemove (&list, 25);
	ElementRemove (&list, -10);
	ElementRemove (&list, 100);
	
	ListRemove (&list);
	
	return 0;
}
