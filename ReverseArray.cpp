#include<bits/stdc++.h>
using namespace std;
void ReverseArray(int arr[],int n)
{
    for(int i=0; i< n/2; i++)
    {
       int temp = arr[i];
       arr[i] = arr[(n-1)-i];
       arr[(n-1)-i] = temp; 
    }
}

void Display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] <<" " ;
    }
}

int main()
{
    int array[4] ={4, 5, 1, 2};
    ReverseArray(array,4);
    Display(array,4);
}