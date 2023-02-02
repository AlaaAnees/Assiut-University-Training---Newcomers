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
    int x1,y1,x2,y2,x3,y3,x4,y4; cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    //  0    0    0    2   2    0    2   2
    // x1    y1   x2   y2  x3  y3   x4   y4
    int minix =min({x1,x2,x3,x4});//min(min(x1,x2),min(x3,x4)); // 0
    int miniy = min({y1,y2,y3,y4});//min(min(y1,y2),min(y3,y4)); // 0
    int maxix =max({x1,x2,x3,x4});//max(max(x1,x2),max(x2,x4)); // 2
    int maxiy =max({y1,y2,y3,y4});//max(max(y1,y2),max(y3,y4)); // 2
    int n; cin>>n;
    while(n--){
        int x,y; cin>>x>>y;
        cout<<(x>=minix && x<=maxix && y>=miniy && y<=maxiy? "YES\n": "NO\n");
    }
}*/
