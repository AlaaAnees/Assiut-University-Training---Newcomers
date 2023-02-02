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
    string s; cin >> s;
    ll cnt = 0,l=0,r=0;
    for(int i=0;i<s.length();i++) {
        if (s[i] == 'L') l++;
        else r++;
        if (l == r) l = 0, r = 0, cnt++;

    }
    cout << cnt << '\n';

    for(int i=0;i<s.length();i++) {
        if (s[i] == 'L') l++, cout << "L";
        else r++, cout << "R";
        if (l == r) { // if l==r make them zeros and print new line , to continue the second test case
            l = 0, r = 0, cout << '\n';
        }

    }


}*/
