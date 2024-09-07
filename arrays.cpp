#include<iostream>
using namespace std;

int main(){

    int box[5] ={};
    for(int i = 0; i <5; i++)
    {
        cout << box[i] ;
    }

    cout << endl;

    int an[3] ={1,2,3};
    
    for(int i = 0; i <5; i++)
    {
        cout << an[i] ;
    }

     cout << endl;

    int arr[4] = {2,3,};

    // another way to traverse array
    cout <<"Traversing by another way" << endl;
     for(int i = 0; i <4; i++)
    {
        
        cout << i[arr] <<" ";
    }

    cout << endl;

    return 0;
}