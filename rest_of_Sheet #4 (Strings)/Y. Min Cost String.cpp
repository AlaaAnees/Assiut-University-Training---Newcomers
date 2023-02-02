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
    string s;cin>>s;
    int costs[26];
    for(int i=0;i<26;i++) cin>>costs[i];
    char a='>', b='>';
    ll cost=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!='?')
        {
            a=s[i];
            b='>';
        }
        if(s[i]=='?'){
            if(b=='>'){
                for(int j=i+1;j<s.size();j++){
                    if(s[j]!='?'){
                        b=s[j];
                        break;
                    }
                }
            }
            if(a=='>'&&b!='>') a=b;
            else if(a!='>' && b=='>') b=a;
            else if(a=='>'&& b=='>') a=b='a';
            for(int j=0;j<26;j++){
                if(costs[j]>=min(costs[a-97],costs[b-97])&&costs[j]<=max(costs[a-97],costs[b-97]))
                {
                    s[i]=(char)(j+97);
                    break;
                }
            }
        }
        if(i!=0){
            cost+=abs(costs[s[i]-97]-costs[s[i-1]-97]);
        }
    }
    cout<<cost<<'\n'<<s;

}*/
