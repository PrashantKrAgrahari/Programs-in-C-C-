#include<bits/stdc++.h>
using namespace std;

 int maxValue(int a, int b, int c)
 {

     int n = (b+1) -((a+b)/2),result[n];
     for(int i = (a+b)/2; i<= b; i++)
     {
         result[i - ((a+b)/2)] = i/c + i%c ;

     }
     int max = result[0];
 
    // Traverse array elements
    // from second and compare
    // every element with current max
    for (int i = 1; i < n; i++)
    {
        if (result[i] > max)
            max = result[i];
 }
        
    return max;
 }
 int main()
 {
     int t,l,r,a;
     cin >> t;

     while(t--)
     {
         cin >> l >> r>> a;
         if(r == a)
         {
             cout << --r << endl;        
             }
             else if((l <= a < r) &&( a <(l+r/2))
             {
                cout << --r << endl;
             }
             else
             {
                 int max = maxValue(l,r,a);
                 cout << max <<endl;
             }

             
         
     }



return 0;

 }