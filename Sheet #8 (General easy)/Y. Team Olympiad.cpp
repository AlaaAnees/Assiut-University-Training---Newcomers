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
    // first line output integer w — the largest possible number of teams.
    //Then print w lines, containing three numbers in each line. Each triple represents
    // the indexes of the children forming the team .
    int n,p=0,m=0,x=0; cin>>n;
    vector<int>arr(n),v1(n),v2(n),v3(n);
    for(int i=0;i<n && cin>>arr[i];i++){
        if(arr[i]==1) v1[p]=i+1,p++;
        else if(arr[i]==2) v2[m]=i+1,m++;
        else v3[x]=i+1,x++;
    }
    int mini =min({p,m,x});
    if(mini>0) {
        cout << mini << endl;
        for (int i = 0; i < mini; i++) cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
    }
    else cout<<0;

}
*/
