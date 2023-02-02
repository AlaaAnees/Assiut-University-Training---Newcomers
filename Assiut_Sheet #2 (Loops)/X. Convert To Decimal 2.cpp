
/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(v) ((v).begin()), ((v).end())
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    IOS;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int ans=0,pw=1;
        while(n){
            if(n%2==1) {
                ans += pw;
                pw *= 2;
            }
            n/=2;
        }
        cout<<ans<<endl;
    }
}*/





/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(v) ((v).begin()), ((v).end())
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    IOS;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int ans=0;
        while(n){
            if(n%2==1) {
                ans++; // count how many ones
            }
            n/=2; // n/2 until we reach 1
        }
        cout<<ll(pow(2,ans)-1)<<endl; // 2 power ans -1 => 10 =>1 0 1 0 => 2 ones => 2 power 2 => 4-1 = 3
    }
}
*/


/*
	stoi() -> string to int
	stoll() -> string to long long
	dtos() -> double to string




@burnout: use logarithm if you want to compare two products
@burnout: a-z : 97-122
@burnout: A-Z : 65-90
@burnout: 0-9 : 48-57



 */

