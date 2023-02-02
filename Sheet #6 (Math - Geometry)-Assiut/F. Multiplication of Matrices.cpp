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
int main() {
    IAMTRYINGandCRYING;
    // 2 2
    //1 2
    //2 1
    int a1,b1; cin>>a1>>b1;
    int arr1[a1][b1];
    for(int i=0;i<a1;i++){
        for(int j=0;j<b1;j++) cin>>arr1[i][j];
    }

    // 2 2
    //3 4
    //4 3
    int a2,b2; cin>>a2>>b2;
    int arr2[a2][b2];
    for(int i=0;i<a2;i++){
        for(int j=0;j<b2;j++) cin>>arr2[i][j];
    }

    int res[a1][b2];
    for(int i=0;i<a1;i++){
        for(int j=0;j<b2;j++) res[i][j]=0;
    }

    for(int i=0;i<a1;i++){
        for(int j=0;j<b2;j++){
            for(int x=0;x<b1;x++) res[i][j]+=arr1[i][x] * arr2[x][j];
        }
    }

    // a1 * b1 = a2 * b2   ==> res = a1 * b2
    for(int i=0;i<a1;i++){
        for(int j=0;j<b2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }


}*/
