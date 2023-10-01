/* O
https://vjudge.net/contest/584662#problem/O
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int h=0;

    vector <bool> f (26 , false);

    for(int i = 0 ; i < s.size() ; i++)
    {
        int s_i = s[i] - 'a';
        f[s_i] = true;
    }

    for(int i = 0 ; i < f.size() ; i++)
    {
        if(f[i] == false)
        {
            char asci = i + 'a';
            cout << asci ;
            h=0;
            break;
        }
        else{
             h=1;
        }
    }
    if(h==1){
cout << "None";
    }
    
    return 0;
}