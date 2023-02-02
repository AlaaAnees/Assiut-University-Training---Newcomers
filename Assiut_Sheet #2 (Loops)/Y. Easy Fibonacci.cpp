/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(v) ((v).begin()), ((v).end())
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    IOS;
    */
/*
     * How to solve :
     * fib(1)=0
     * fib(2)=1
     * fib(n)=fib(n-1)+fib(n-2)
     * fibonacii starts with zero
     * *//*

    int n; cin>>n;
    int f[n];
    f[0]=0;
    f[1]=1;
    if(n==1) cout<<f[0]; //only one number is an input //so print 0
    else cout<<f[0]<<" "<<f[1]<<" "; //haytb3 0 and 1 w ybd2 el loop mn 3nd el 2

    for(int i=2;i<n;i++){
        f[i]=f[i-1]+f[i-2];
        cout<<f[i]<<" ";
    }
    cout<<endl;
    return 0;
}
*/



/* 2's solution*/
/*#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(v) ((v).begin()), ((v).end())
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    IOS;
    int n ; cin>>n;
    int f[n];
    f[0]=0;
    f[1]=1;
    for(int i=0;i<n;i++){
        f[i+2]=f[i+1]+f[i];
        cout<<f[i]<<" ";
    }
}*/

