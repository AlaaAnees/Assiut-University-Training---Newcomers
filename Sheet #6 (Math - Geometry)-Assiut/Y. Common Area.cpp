/*
  _    _                 _ _         _____                          _
 | |  | |               | | |       / ____|                        | |
 | |__| | __ _ _ __   __| | | ___  | |  __  __ _ _ __ ___   ___  __| |
 |  __  |/ _` | '_ \ / _` | |/ _ \ | | |_ |/ _` | '_ ` _ \ / _ \/ _` |
 | |  | | (_| | | | | (_| | |  __/ | |__| | (_| | | | | | |  __/ (_| |
 |_|  |_|\__,_|_| |_|\__,_|_|\___|  \_____|\__,_|_| |_| |_|\___|\__,_|

			pausing is not losing
*/

/*#include <bits/stdc++.h>
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
    int t; cin>>t;
    int j=1;
    while(t--){
        int n; cin>>n;
        int maxX = INT_MIN, maxY = INT_MIN, minX = INT_MAX, miny = INT_MAX;
        for(int i=0;i<n;i++) {
            int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
            maxX = max(maxX, x1);
            maxY = max(maxY, y1);
            minX = min(minX, x2);
            miny = min(miny, y2);
        }

        ll area;
           if(minX<=maxX || miny<=maxY) area=0; // if there was no intersecting between the rectangles the area would = 0
           else area=abs(maxX-minX) * abs(maxY- miny);
           cout<<"Case #"<<j<<": "<<area<<endl;
           j++;


    }
}*/
