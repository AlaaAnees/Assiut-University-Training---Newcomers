/*
  _    _                 _ _         _____                          _
 | |  | |               | | |       / ____|                        | |
 | |__| | __ _ _ __   __| | | ___  | |  __  __ _ _ __ ___   ___  __| |
 |  __  |/ _` | '_ \ / _` | |/ _ \ | | |_ |/ _` | '_ ` _ \ / _ \/ _` |
 | |  | | (_| | | | | (_| | |  __/ | |__| | (_| | | | | | |  __/ (_| |
 |_|  |_|\__,_|_| |_|\__,_|_|\___|  \_____|\__,_|_| |_| |_|\___|\__,_|

			pausing is not losing
*/

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
bool isprime(ll n){
    if(n==2) return true;
    if(n<=1 || n%2==0) return false;
    for(int i=3;i<= sqrt(n);i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main() {
    IAMTRYINGandCRYING;
    //fib[0]=0 , fib[1]=1, fib[2]=1
    ll fib[51]{};
    fib[1]=0,fib[2]=1;
    for(int i=3;i<=50;i++) fib[i]=fib[i-1]+fib[i-2];

    for(int i=1;i<=50;i++) fib[i]=isprime(fib[i]);
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n; //index of fibonacci
        cout<<(fib[n]?"prime\n":"not prime\n");

    }
}
*/

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
    int t,x;
    bool prime[50]={

            0 ,0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0,
            1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0,
            0, 0, 1, 0, 0, 0, 0, 0, 0, 0,0, 0, 0, 0,0,
            0, 1, 0, 0, 0, 1, 0, 0
    };
    cin>>t;
    while(t--){
        cin>>x;
        cout<<(prime[x-1]==1?"prime\n":"not prime\n");
    }

}*/
