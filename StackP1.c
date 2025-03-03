#include <stdio.h>
#include <limits.h>
#define MAX 100
#include <stdlib.h>
int stack[MAX], top = -1;

int isFull()
{
    return top == MAX - 1 ? 1 : 0;
}
int isEmpty()
{
    return top == -1 ? 1 : 0;
}
void push()
{
    if (isFull())
        printf("Stack overflow!!!!\n");
    else
    {
        int value;
        printf("Enter element :");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("Element added");
    }
}
int pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow!!!!\n");
        return INT_MIN; // minmum value of int
    }
    else
    {
        int val = stack[top]; // declare a variable to store top element
        top--;
        return val;
    }
}
int peek()
{
    if (isEmpty())
    {
        printf("Stack is empty!!!!\n");
        return INT_MIN; // minmum value of int
    }
    else
    {
        return stack[top];
    }
}

void show()
{
    if (isEmpty())
    {
        printf("Stack is empty");
    }
    else
    {
        int top;
        for (int i = top; i >= 0; i--)
        {
            printf("%d", stack[i]);
        }
    }
}
int main()
{
    while (1)
    {
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. peek\n");
        printf("4. show\n");
        printf("Exit\n");
        int choice, val;
        printf("Enter choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            if (val != INT_MIN) // if value is empty
                printf("%d pop from the stack!!\n", val);
            break;
        case 3:
        val = peek();
        if(val != INT_MIN)
        printf("Top element is %d\n", val);
            break;
        case 4:
            show();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid choice!!!!\n");
        }
        printf("\n");
        system("pause");
    }
    return 0;
}