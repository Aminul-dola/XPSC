/* L
https://atcoder.jp/contests/abc125/tasks/abc125_a?lang=en
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b , t;
    cin >> a >> b >> t;

    int time = a;
    int biscute = 0;

    while(time <= t + 0.5)
    {
        time += a;
        biscute += b;
    }

    cout << biscute;
    return 0;
}