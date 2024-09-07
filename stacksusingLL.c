#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

// This code is written by Prashant Agrahari with lots of dedication to learn.

#define Capacity 6
int n = 0;

struct node
{
    int data;
    struct node *previous;
};

struct node *top = NULL;
void push()
{
    int x;
    scanf("\n%d", &x);
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->previous = top;
    top = newnode;
    n++;
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack underflow");
    }
    else
    {
        struct node *temp;
        temp = top;
        top = top->previous;
        free(temp);
        n--;
    }
}

void display()
{
    if (top == NULL)
    {
        printf("Stalk is empty\n");
    }
    else
    {
        struct node *temp;
        temp = top;
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->previous;
        }
    }
}

void peek()
{
    if (top == NULL)
    {
        printf("Can't peek the topmost element in the stack\n");
    }
    else
    {
        printf("Topmost element is %d \n", top->data);
    }
}

void isFull()
{
    if (n < Capacity)
    {
        printf("False\n");
    }
    else
         printf("True\n");
}

void isEmpty()
{
    if (n == 0)
    {
        printf("Completely Empty");
    }
    else if(n < Capacity)
         printf("True\n");

         else
         printf("False\n");
         
}

int main()
{
    /*struct node* newnode;
    newnode = (struct node*)malloc(siz/eof(struct node)); */

    

    while (1)
    {

        printf(" Menu given as follow. Type the given number to proceed further.\n1.Push 2.Pop 3.Display 4.Peek 5.isFull 6.isEmpty\n");

        int num;
        scanf("\n%d", &num);
        switch (num)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            isFull();
            break;
        case 6:
            isEmpty();
            break;

        
        }
    }

    return 0;
}