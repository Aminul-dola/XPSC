/* H
https://codeforces.com/problemset/problem/633/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b , c;
    cin >> a >> b >> c;

    bool b_s = false;

    for(int i = 0 ; i <= 10000 ; i++)
    {
        for(int j = 0 ; j <= 10000; j++)
        {
            if((a * i) + ( b * j) == c)
            {
                cout << "Yes";
                b_s = true;
            }
        }
    }
    if( b_s == false)
    {
        cout << "No";
    }
    return 0;
}