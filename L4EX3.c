#include <stdio.h>
#include <stdlib.h>
 
void add_queue(int *q,int *tail, int element)
{
    q[(*tail)++] = element;
}
 
int delete_queue(int *q,int *head)
{
    return q[(*head)++];
}
 
void view_element(int *q,int head,int tail)
{
    int i = tail - 1;
    while(i >= head)
        printf("%d ",q[i--]);
    printf("\n");
}
 
int main()
{
    const int QUEUE_SIZE = 5; 
    int head, tail, element;
    int queue[QUEUE_SIZE];
 
    head = tail = 0;
 
    printf("Now we add elements.\n");
    
    while(!(tail == QUEUE_SIZE))
    {
        printf("Enter a number to the beginning of the queue:");
        scanf("%d",&element);
 
        add_queue(queue,&tail,element);
 
        view_element(queue,head,tail);
    }
    printf("\nQueue is full\n\n");
 
    printf("Now we delete elements.\n");
    while(!(tail == head))
    {
        element = delete_queue(queue,&head);
        printf("dequeue element %d \n",element);
 
        view_element4(queue,head,tail);
    }
    printf("Queue is free!\n");
    return 0;
}
