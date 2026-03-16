#include<stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push()
{
    int item;

    if(top == MAX-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter element: ");
        scanf("%d",&item);
        top++;
        stack[top] = item;
    }
}

void pop()
{
    if(top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("Deleted element: %d\n", stack[top]);
        top--;
    }
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Stack elements are:\n");
        for(i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

void search()
{
    int item, i, flag = 0;

    if(top == -1)
    {
        printf("Stack is Empty\n");
        return;
    }

    printf("Enter element to search: ");
    scanf("%d",&item);

    for(i = 0; i <= top; i++)
    {
        if(stack[i] == item)
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
        printf("\n1.Push\n2.Pop\n3.Display\n4.Search\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: push();
                    break;

            case 2: pop();
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
