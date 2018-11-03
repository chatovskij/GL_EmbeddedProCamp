#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};
 
struct node* add(struct node* head,int data)
{
    struct node* tmp = (struct node*)malloc(sizeof(struct node));
    if(tmp == NULL)
    {
        exit(0);
    }
    tmp->data = data;
    tmp->next = head;
    head = tmp;
    return head;
}

struct node* get(struct node *head,int *element)
{
    struct node* tmp = head;
    *element = head->data;
    head = head->next;
    free(tmp);
    return head;
}

void view_element(struct node* head)
{
    struct node *current;
    current = head;
    if(current!= NULL)
    {
        printf("Elements in the stack: ");
        while (current!= NULL)
        {
        	printf("%d ",current->data);
            current = current->next;
        }
        printf("\n");
    }
    else
    {
        printf("The Stack is empty\n");
    }
 
} 
  
int main()
{
    struct node* head = NULL;
    int size, element;
    int counter = 0;
 
    printf("Enter the number of stack elements:");
    scanf("%d",&size);
 
    printf("Enter elements in the stack.\n");
 
    head = NULL;
 
    while(counter < size)
    {
 
        printf("Enter a number to add in the stack:");
        scanf("%d",&element);
        head = add(head,element);
        view_element(head);
        counter++;
    }
 
    printf("Get elements from the linked stack.\n");
    while(!(head == NULL))
    {
        head = get(head,&element);
        printf("Get %d from stack\n",element);
        view_element(head);
    }
 
    return 0;
}
