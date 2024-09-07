#include<iostream>
using namespace std;

void rotateArray(int arr[], int size, int n)
{
int temp[n];
for (int i = 0; i < n; i++)
{
    temp[i]= arr[i];
}

for (int i = 0; i < size; i++)
{
   if(i < (size -n))
   arr[i] = arr[i+n];
   else
   arr[i] = temp[ i -(size -n)];

}
 
for (int i = 0; i < size; i++)
{
    cout << arr[i] << " " ;
}


}






int main()
{
int len, N ;
cout << "Enter length of array:" << endl ;
cin >> len ;
cout << "Enter a number factor by which array will rotate itself8:" << endl ;
cin >> N ;
int array[len];
for (int i = 0; i < len; i++)
{
    cin >> array[i] ;
}
cout << endl ;

rotateArray(array, len,N);

    return 0;
}