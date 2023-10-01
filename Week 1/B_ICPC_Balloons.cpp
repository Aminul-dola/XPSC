/* M
https://codeforces.com/problemset/problem/1703/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t --)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector <bool> b (26 , false);

        int t_b = 0;

        for(int i = 0 ; i < n ; i++)
        {
            int i_b = s[i] - 'A';

            if(b[i_b] == false)
            {
                b[i_b] = true;

                t_b += 2;
            }
            else
            {
                t_b += 1;
            }
        }
        cout << t_b << endl;
    }
    return 0;
}