/* E
https://atcoder.jp/contests/abc226/tasks/abc226_a?lang=en
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin >> x;

    double fp = x - floor(x);

    if(fp >= 0.5)
    {
        cout << floor(x) + 1;
    }
    else
    {
        cout << floor(x);
    }
    return 0;
}