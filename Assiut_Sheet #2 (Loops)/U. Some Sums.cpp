/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(v) ((v).begin()), ((v).end())
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    IOS;
    int n,a,b,iami=0,sum,total_sum=0; cin>>n>>a>>b;
    for(int i=1;i<=n;i++){
        sum=0; // after every increment of i, you should make sum=0 to calculate the next i and add it in sum.
        iami=i;
        while(iami){
            sum+=iami%10;
            iami/=10;
        }
        if(sum>=a&&sum<=b) total_sum+=i;
    }
    cout<<total_sum;

}
*/
