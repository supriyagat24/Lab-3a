#include<stdio.h>
#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue()
{
    int item;

    if(rear == MAX-1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        printf("Enter element: ");
        scanf("%d",&item);

        if(front == -1)
            front = 0;

        rear++;
        queue[rear] = item;
    }
}

void dequeue()
{
    if(front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("Deleted element: %d\n", queue[front]);
        front++;
    }
}

void display()
{
    int i;

    if(front == -1)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue elements are:\n");
        for(i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}

void search()
{
    int item, i, flag = 0;

    if(front == -1)
    {
        printf("Queue is Empty\n");
        return;
    }

    printf("Enter element to search: ");
    scanf("%d",&item);

    for(i = front; i <= rear; i++)
    {
        if(queue[i] == item)
        {
            printf("Element found at position %d\n", i);
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        printf("Element not found\n");
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Search\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: enqueue();
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: search();
                    break;
            case 5: return 0;
            default: printf("Invalid choice\n");
        }
    }
}