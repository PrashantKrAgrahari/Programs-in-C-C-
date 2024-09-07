#include<iostream>
using namespace std;

int main()
{
    int n,s,t;
    cin >> t;
    while(t != 0)
    {
        cin >> n >> s;
        int ans;
        if(s > n)
        {
            int m = s-n;
            int ans = abs(n - m);
            cout << ans << endl;

        }

        else
        {
            ans = s;
            cout << ans << endl;
        }

        t--;
    }

    return 0;
}