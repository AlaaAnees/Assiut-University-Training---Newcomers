/*
  _    _                 _ _         _____                          _
 | |  | |               | | |       / ____|                        | |
 | |__| | __ _ _ __   __| | | ___  | |  __  __ _ _ __ ___   ___  __| |
 |  __  |/ _` | '_ \ / _` | |/ _ \ | | |_ |/ _` | '_ ` _ \ / _ \/ _` |
 | |  | | (_| | | | | (_| | |  __/ | |__| | (_| | | | | | |  __/ (_| |
 |_|  |_|\__,_|_| |_|\__,_|_|\___|  \_____|\__,_|_| |_| |_|\___|\__,_|

			pausing is not losing
*/

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
char a[105][105];
int main() {
    IAMTRYINGandCRYING;
    /* int n,m; cin>>n>>m ;
     char arr[n + 2][m + 2] ;
     for(int i = 1 ; i <= n ; i++){
         for(int j = 1 ; j <= m ; j++){
             cin >> arr[i][j] ;
         }
     }
     int x,y; cin>>x>>y ;
     bool is_x = true ;
     for(int i = x - 1 ;  i <= x + 1 ; i++){
         for(int j = y - 1 ; j <= y + 1 ; j++){
             if(i == x && j == y) continue;
             if(arr[i][j] == '.' ) is_x = false ;
         }
     }
     cout << (is_x ? "yes" : "no") ;
 }

 */
    int n,m; cin>>n>> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) cin >> a[i][j];
    }
    int x,y; cin>>x>>y;
    if (a[x][y - 1] == '.' ||
        a[x][y + 1] == '.' ||

        a[x - 1][y] == '.' ||
        a[x + 1][y] == '.' ||

        a[x - 1][y - 1] == '.' ||
        a[x + 1][y + 1] == '.' ||

        a[x + 1][y - 1] == '.' ||
        a[x - 1][y + 1] == '.') cout << "no";
    else cout << "yes";
}

/*
	stoi() -> string to int
	stoll() -> string to long long
	dtos() -> double to string




@burnout: use logarithm if you want to compare two products
@burnout: a-z : 97-122
@burnout: A-Z : 65-90
@burnout: 0-9 : 48-57



 */