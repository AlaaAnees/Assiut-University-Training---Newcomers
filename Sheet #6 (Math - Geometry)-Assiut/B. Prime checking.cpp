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
#define sz(x) int(x.size())

bool prime[100000];
void seive(ll n){
    //the idea is we'll start from 2 and ++,for every non prime number it will equal 1 and for every prime number it 'll equal 0
    prime[0] =prime[1]=1;
    for(int i=2;i<=sqrt(n);i++){
        if(prime[i]==0) {
            for (int j = i + i; j <= n; j += i) {
                prime[j] = 1;
            }
        }
    }
    */
/*for(int i=0;i<=n;i++){
       // if(prime[i]==0) cout<<i<<endl;
       cout<<(prime[i]==0?"YES":"NO");
    }*//*

    cout<<(prime[n]==0?"YES":"NO");

}
int main() {
    IAMTRYINGandCRYING;
    */
/*int t=1;
    while(t--){
        seive(10000);
    }*//*

    ll n; cin>>n;
    seive(n);



}



*/
























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
#define sz(x) int(x.size())
bool is_prime(ll n){
    if(n<2 || (n%2==0 && n!=2)) cout<<"NO";
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) cout<<"NO";
        else cout<<"YES";
    }

}
int main() {
    IAMTRYINGandCRYING;
    ll n; cin>>n;
    is_prime(n);


}
*/


/*ll n; cin>>n;
    bool flag=1;
    if(n==1 || n==0) flag=0;
    for(int i=2;i*i<n;i++){
        if(n%i==0) {
            flag=0;
            break;
        }
    }
    if(flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;*/