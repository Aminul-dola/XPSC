/* D
https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b;
    cin >> a >> b;

    if(a > b)
    {
        cout << a + a - 1;
    }
    else if( b > a)
    {
        cout << b + b - 1;
    }
    else
    {
        cout << a + b;
    }
    return 0;
}