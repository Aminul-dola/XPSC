/* F
https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x ;
    cin >> x;

    if(x >= 0 && x <= 9)
    {
        cout << "000" << x;
    }
    else if(x >= 10 && x <= 99)
    {
        cout << "00" << x;
    }
    else if(x >= 100 && x <= 999)
    {
        cout << "0" << x;
    }
    else
    {
        cout << x;
    }
    return 0;
}