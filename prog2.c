#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 50
char stack[N];
int top = -1;

void push()
{
   if(top == N-1)
   {
       printf("Stackoverflow");
   }

   else
   {
       top++;
       char ch;
       scanf("\n%c",&ch);
       stack[top] = ch;
   }
}

void display()
{
    for(int i = top; i>=0; i--)
    {
        printf("%c",stack[i]);
    }
}

int main()
{
    //int k;
    while(1)
    {
        int choice;
        printf("Choices are : 1. push 0. exit");
        scanf("\n%d",&choice);
        if(choice == 1)
        {
        push();
        
        }
        else
        {
            break;
        }

    }

    display();

    return 0;

}



