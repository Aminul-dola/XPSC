/* C
https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b;

    cin >> a >> b;
    
    int s =0;

    for(int i = a ; i <= b ; i++)
    {
        s++;
    }
    cout << s;
    return 0;
}