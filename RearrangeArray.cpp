/* We will rearrange an array such that arr[i] = i(index number)  
and if arr[i] is not equals to i then store -1

Test-Cases
Input : arr = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1}
Output : [-1, 1, 2, 3, 4, -1, 6, -1, -1, 9]

Input : arr = {19, 7, 0, 3, 18, 15, 12, 6, 1, 8,
              11, 10, 9, 5, 13, 16, 2, 14, 17, 4}
Output : [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 
         11, 12, 13, 14, 15, 16, 17, 18, 19]

*/

#include<bits/stdc++.h>
using namespace std;
void Rearrange(int arr[], int n)
{
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j] == i)
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                
            }
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i] != i)
        {
            arr[i] = -1;
        }
    }
    
}

void Display(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << arr[i] <<" ";
    }
}
int main()
{

int array[20] = {19, 7, 0, 3, 18, 15, 12, 6, 1, 8,
              11, 10, 9, 5, 13, 16, 2, 14, 17, 4};

Rearrange(array,20);
Display(array,20);

    return 0;
}

