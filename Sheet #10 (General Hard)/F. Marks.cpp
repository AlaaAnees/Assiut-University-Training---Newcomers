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
int main() {
    IAMTRYINGandCRYING;
    //n students.
    // received marks for m subjects.
   */
/* string s,t; cin>>s>>t;
    int i=s.size(),j=t.size();
    while(i>=0 && j>=0){
        if(s[i]==t[j]) i--,j--;
        else break;
    }
    cout<<(i+1) + (j+1);*//*

   int n,m,cnt=0; cin>>n>>m;
   char arr[100][100];
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++) cin>>arr[i][j];
   }
   for(int i=0;i<n;i++){
       int mx= INT_MIN;
       for(int j=0;j<m;j++){
           for(int k=0;k<n;k++){
               if(arr[k][j]>=mx) mx=arr[k][j];
           }
           if(arr[i][j] ==mx){
               cnt++;
               break;
           }
           else mx=INT_MIN;
       }
   }
    cout<<(cnt==0?1:cnt);
}
*/
