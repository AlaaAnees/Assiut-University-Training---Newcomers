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
//int arr[1'00];
int main() {
    IAMTRYINGandCRYING;
    int n,maxi=0,mini=0; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<n;i++){
        //4
        //33 44 11 22
        // 44 33 22 11
        if(arr[i] > arr[maxi]) maxi=i;
        if(arr[i] <= arr[mini] ) mini=i;
    }

    cout<<(maxi>mini? (maxi+(n-2-mini)) : (maxi+(n-1-mini)));
}
*/
