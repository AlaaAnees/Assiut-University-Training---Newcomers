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
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define all(v) ((v).begin()), ((v).end()) //sorting from the smallest
#define Ceil(x,y) ((x+y-1)/y)
#define watch(x) cout<<(#x)<<" = "<<x<<endl //print the variable and the current value of it
#define rt(s) return cout<<s,0 //cout<<s; return 0;
#define IAMTRYINGandCRYING ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define infinity 2'000'000'000
#define sz(x) int(x.size())
#define numOfOnes(n) __builtin_popcount(n)
int main() {
    IAMTRYINGandCRYING;
    int n,k; cin>>n>>k;
    n=2*n+1;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0; i<n;i++){
        if( (i&1) && arr[i]-1 > arr[i-1] && k && arr[i] -1 > arr[i+1]){
            --arr[i];
            --k;
        }
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}*/




/*

  int n, k; cin >> n >> k;
        vector<int>v(2 * n + 1), vv;
        for (int i = 0; i < 2 * n + 1; i++)cin >> v[i];
        for (int i = 1; i < 2 * n; i += 2) {
            if (k && v[i] - 1 > v[i - 1] && v[i] - 1 > v[i + 1])k--, v[i]--;
        }
        for (auto t : v)cout << t << " ";






int n,k;
cin>>n>>k;
int a[n*2+5];
for(int i=0;i<=n*2;i++)cin>>a[i];

for(int i=1;i<=n*2-1;i++)
   {
    if(a[i]>a[i-1]+1&&a[i]>a[i+1]+1)
    {
     k--;
     a[i]--;
    }
  if(k==0)break;
   }
   for(int i=0;i<=n*2;i++)cout<<a[i]<<" ";


////////////////////////////////////////////////////////


ll a[3001];
int main()
{
    fast();
    int n,m;
    cin>>n>>m;
    n*=2;
    for(int i=0;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++)
    {
        if((a[i]-1)>a[i-1]&&(a[i]-1)>a[i+1]&&m)
        {
         a[i]--;
         m--;
        }
    }
    for(int i=0;i<=n;i++)cout<<a[i]<<" ";
*/







