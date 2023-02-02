/*
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define all(v) ((v).begin()), ((v).end()) //sorting from the smallest
#define allr(s) s.rbegin(),s.rend()  //sorting from the biggest
#define Ceil(x,y) ((x+y-1)/y)
#define watch(x) cout<<(#x)<<" = "<<x<<endl //print the variable and the current value of it
#define rt(s) return cout<<s,0 //cout<<s; return 0;
#define fixed(n) cout << fixed << setprecision(n)
#define test int t;cin>>t;while(t--)
#define IAMTRYINGandCRYING ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define loop1(n) f(int i = 0; i < n; i++)
#define loop2(n) f(int j = 0; j < n; j++)
#define infinity 2'000'000'000
#define sz(x) int(x.size())
int main() {
    IAMTRYINGandCRYING;
string s1,s2; cin>>s1>>s2;
int c1=0,c2=0;
// aba
// aab
    if(s1.size()!=s2.size()) return cout<<"NO",0;
    for(int i=0;i<s1.size();i++) {
        if(s1[i]!=s2[i]) c1++;
    }
    sort(all(s1));
    sort(all(s2));
    for (int i = 0; i < s1.size();i++) {
        if(s1[i]==s1[i-1]) c2++;
    }
    if(s1!=s2 || (c1 != 2 && (c1 || !c2) )) cout<<"NO";
    else cout<<"YES";
    return 0;
    */
/*!(!c1 && c2)*//*


}*/










/*
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define all(v) ((v).begin()), ((v).end()) //sorting from the smallest
#define allr(s) s.rbegin(),s.rend()  //sorting from the biggest
#define Ceil(x,y) ((x+y-1)/y)
#define watch(x) cout<<(#x)<<" = "<<x<<endl //print the variable and the current value of it
#define rt(s) return cout<<s,0 //cout<<s; return 0;
#define fixed(n) cout << fixed << setprecision(n)
#define test int t;cin>>t;while(t--)
#define IAMTRYINGandCRYING ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define loop1(n) f(int i = 0; i < n; i++)
#define loop2(n) f(int j = 0; j < n; j++)
#define infinity 2'000'000'000
#define sz(x) int(x.size())
int main() {
    IAMTRYINGandCRYING;
   string s1,s2,a="" , b="" ; cin>>s1>>s2;
   int mini=min(s1.size(),s2.size());
   for(int i=0;i<mini;i++)
       if(s1[i] != s2[i]){
           a+=s1[i];
           b+=s2[i];
       }
   if(a.size() != b.size()) cout<<"NO";
   else{
       if(a.size()==2){
           swap(a[0],a[1]);
           cout<<(a[0]==b[0] && a[1]==b[1]?"YES" : "NO");
       }
       else if( a.size()==0){
           sort(all(s1));
           bool flag=0;
           for(int i=0;i<s1.size()-1;i++)
               if(s1[i]==s1[i+1]) flag=1;
               cout<<(flag?"YES":"NO");
       }
       else cout<<"NO";
   }


}
*/



/*
 *  string n, m, a = "", b = "";
    cin>> n >> m;

    lp(i, min(n.size(), m.size())){
        if(n[i] != m[i]){ a += n[i]; b += m[i]; }
    }

    if(a.size() != b.size()) cout<< "NO";
    else{
        if(a.size() == 2) {
            swap(a[0], a[1]);
            cout<< (a[0] == b[0] && a[1] == b[1] ? "YES" : "NO");
        }
        else if(a.size() == 0){
            sort(all(n));
            bool ok = 0;
            lp(i, n.size()-1) if(n[i] == n[i+1]) ok = 1;
            cout<< (ok ? "YES" : "NO");
        }
        else cout<< "NO";
    } */



/*
 * string a,b;
    cin>>a>>b;
    int idx1=0,idx2=0;
    bool ok=0,ok1=0;
    bool ok3=0;
    map<int,int>mp;
    if(sz(a)!=sz(b))return cout<<"NO",0;
    for(int i=0;i<sz(a);i++){
        if(a[i]!=b[i]){
            if(!ok)idx1=i,ok=1;
            else if(!ok1)idx2=i,ok1=1;
        }
        if(mp[a[i]]++)ok3=1;
    }
    if(!ok&&!ok1){
        cout<<(ok3?"YES":"NO");
        return 0;
    }
    swap(a[idx1],a[idx2]);
    cout<<(a==b?"YES":"NO");
	return 0;*/



/*
 *   string s,c;
  cin>>s>>c;
  long long a=0;
  string z="";
  string x="";
  if(s==c){
    for(int i=0;i<s.size();i++){
        if(count(s.begin(),s.end(),s[i])>1){cout<<"YES";
        return 0;
        }
    }
  }
  for(int i=0;i<s.size();i++){
    if(s[i]!=c[i]){a++;
    z+=s[i];
    x+=c[i];
    }
    if(a>2){
        cout<<"NO";
        return 0;
    }
  }
  reverse(x.begin(),x.end());
  if(z==x&&a==2)
cout<<"YES";
else cout<<"NO";*/











