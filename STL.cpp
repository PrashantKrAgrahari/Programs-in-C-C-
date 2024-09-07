#include<iostream>
#include<array>
#include<algorithm>

using namespace std;
int main()
{

   array<int,5> a = {2,18,23,4,7};
   
   cout << "The first element of a is  "<< a.front() << endl;
   cout << "The last element of a is  "<< a.back() << endl;


   cout<<" Array Before sorting is " << endl;
   for (int i = 0; i < a.size(); i++)
   {
    cout<< a[i] << endl;
   }

   
   cout<<"Array after sorting is " << endl;
   for (int i = 0; i < a.size(); i++)
   {
    cout<< a[i] << endl;
   }   
   



    return 0;
}