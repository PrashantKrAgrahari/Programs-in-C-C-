#include<stdio.h>

void insert(int array[], int n, int x)
{
    int y,j;
   for (int i = 0; i < n; i++)
   {
       
       if(array[i]> x)
       {
           j =i;
           y = array[i];
           array[i] = x;

           break;
       }

       else if(array[i] < x)
       {
           if(array[i]== array[n-1])
           {
               array[n] = x;
           }
           else
           continue;

       }

       else{
       continue;
       }
   }
   for (int i = j+1; i < n; i++)
   {
       int k = array[i];
       array[i] = y;
       y =k;
   }
   
   
}

void display(int array[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    
}

int main()
{
    int arr[8] = {2,4,5,8,10};
    insert(arr, 8, 11);
    display(arr,8);
}