/*
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
typedef long long ll;
#define fixed(n) cout << fixed << setprecision(n)
#define IAMTRYINGandCRYING ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(x) int(x.size())
int main() {
    IAMTRYINGandCRYING;
    int  n , cnt=0 ;  string s ; cin>>n>>s ;
    for(int i=0 ; i < s.size() ;i++)
    {
        if(s[i]=='W')  cnt  +=2;
        else if (s[i]=='V')  cnt  +=5;
        else if (s[i]=='X' && i!=s.size()-1)  ++i;
        else if (s[i]=='Y' && i!=s.size()-1)
        {
            s += s[i+1];
            ++i;
        }
        else
        {
            if(i!=s.size()-1&&s[i+1]=='W')
            {
                cnt /= 2 ;
                ++i;
            }
            else if(i!=s.size()-1&&s[i+1]=='V')
            {
                cnt /= 5 ;
                ++i;
            }
        }


    }
    cout<<cnt;
}*/
