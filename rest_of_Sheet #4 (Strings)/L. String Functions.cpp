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
    int n, q, a, b; cin >> n >> q;
    string s, f; cin >> s;
    while (q--) {
        cin >> f;
        if (f == "pop_back")
            s.pop_back();

        else if (f == "front")
            cout << s[0]<<endl;

        else if (f == "back")
            cout << s[s.size()-1]<<endl;

        else if (f == "print") {
            cin >> a;
            cout << s[a-1]<<endl;
        }
        else if (f == "push_back") {
            char d;
            cin >> d;
            s.push_back(d);
        }

        else if (f == "substr") {
            cin >> a >> b;
            for (int i = min(a, b)-1;i < max(a, b); i++)cout << s[i];
            cout << endl;
        }
        else if (f == "sort") {
            cin >> a >> b;

            sort(s.begin() +min(a, b)  - 1, s.begin() + max(a, b)  );
        }

        else if (f == "reverse") {
            cin >> a >> b;
            reverse(s.begin() + min(a, b) - 1, s.begin() + max(a, b) );
        }

    }




}*/
