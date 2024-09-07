#include<stdio.h>

#define N 5
int stack[N];
int top = -1;

void push()
{
         int x;
        scanf("\n%d", &x);
    if(top == N-1)
    {
        printf("Stack overflow\n");

    }
    else
    {
        
        top++;
        stack[top] = x;
    }

}

_Bool isFull()
{
    if (top == N-1)         
    {
        printf("True\n");
    }

    else
    {
        printf("False\n");
    }
    
}

_Bool isEmpty()
{
    if (top == -1)
    {
        printf("True\n");

    }

    else if(top < N-1)
    printf("True, stack is Partially empty\n");

    else
    {
        printf("False\n");
    }
}


void pop()
{
    if(top == -1)
    {
        printf("Stack underflow condition\n");
    }
    else
    {
       printf("Poped element is %d\n", stack[top]);
       top--; 
    }
}

void peek()
{
    printf("Topmost element is %d\n", stack[top]);
}

void display()
{
    for (int i = top ; i >=0; i-- )
    {
        printf("%d ", stack[i]);
    }
    
}

int main()
{
    while(1)
    {
        printf("Following choices are given:\n1.push 2.pop 3.isEmpty 4.isFull 5.peek 6.display\n");
      int choice;
    scanf("%d ", &choice);

    switch (choice)
    {
    case 1:
        push();
        break;
        case 2:
        pop();
        break;

        case 3:
        isEmpty();
        break;

        case 4:
        isFull();
        break;

        case 5:
        peek();
        break;

        case 6:
        display();
        break;
    }
    }
    
    
    return 0;
}