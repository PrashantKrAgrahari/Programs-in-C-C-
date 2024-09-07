#include<iostream>

using namespace std;

int main()
{
    int a,b,t;
    cin >> t;
    while(t--)
    {
        cin >> a >>b ;
        if(a ==0 && b !=0)
        {
            cout << 1 <<endl;
        }
        else
        {
            cout << 1*a + 2*b +1 <<endl;
        }
    }
    return 0;
}