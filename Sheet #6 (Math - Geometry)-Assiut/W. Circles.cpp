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
    double x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2; // first circle
    double x3,y3,x4,y4; cin>>x3>>y3>>x4>>y4; //second circle

    //center for first circle
    double center_r1_x= (x1+x2)/2;
    double center_r1_y= (y1+y2)/2;

    //center for second circle
    double center_r2_x= (x3+x4)/2;
    double center_r2_y= (y3+y4)/2;

    // the distance between center of first circle and the second circle
    double x= sqrt(pow((x1-x2),2) + pow((y1-y2),2)) /2;
    double y= sqrt(pow((x3-x4),2) + pow((y3-y4),2)) /2;
    double z= sqrt(pow((center_r1_x - center_r2_x),2) + pow((center_r1_y - center_r2_y),2));

    cout<<(x+y>=z?"YES":"NO");
}*/
