#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int *arr = (int*)malloc(sizeof(int) * 4);
    for(int i =0; i<4 ; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i<4 ; i++)
    {
        cout << arr[i] <<" " ;
    }
	return 0;
}
