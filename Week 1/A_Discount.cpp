/* J
https://atcoder.jp/contests/abc193/tasks/abc193_a?lang=en
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a , b;
    cin >> a >> b;

    double discount;

    discount = ((a - b) / a) * 100;

    cout << discount ;
    return 0;
}