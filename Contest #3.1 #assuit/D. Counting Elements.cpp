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
  *//*  int n; cin>>n;
    int arr[n];
    int l=0,r=n-1;
    for(int i=0;i<n && cin>>arr[i];i++){
        //sort(arr,arr+n);
        int cnt=0;
        if(arr[i]+1==arr[n-i-1]) {
            cnt++;
            l++;
            r--;
        }
        cout<<cnt;
    }
*//*




    int n; cin>>n;
    int arr[n],cnt=0;
    for(int i=0;i<n && cin>>arr[i];i++);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( ( arr[i]+1 )==arr[j]) {
                cnt++;
                break;
            }
        }
    }
    cout<<cnt;

}*/















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
    int n; cin>>n;
    int arr[n],frq[2001];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
        frq[arr[i]]++;
    }
    //sort(arr,arr+n); // 4 4 5
    int cnt=0;
    for(int i=0;i<n;i++){
        if( frq[arr[i]+1] ) cnt++;
    }
    cout<<cnt;

}*/











/*
	stoi() -> string to int
	stoll() -> string to long long
	dtos() -> double to string




@burnout: use logarithm if you want to compare two products
@burnout: a-z : 97-122
@burnout: A-Z : 65-90
@burnout: 0-9 : 48-57



 */

