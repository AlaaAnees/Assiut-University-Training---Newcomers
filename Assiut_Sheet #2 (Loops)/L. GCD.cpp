/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(v) ((v).begin()), ((v).end())
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#include <algorithm>
*/
/*int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b); //(12,8) //(8,4)
}*//*

int main() {
    IOS;
    //GCD => is the largest positive integer that divides each of the integers.
    // the numbers that divides both 8 and 12 are (1,2,4) and 4 is the largest one .
   */
/* int a,b; cin>>a>>b;
    cout<<gcd(a,b)<<" ";
    return 0;*//*


*/
/*   int a,b; cin>>a>>b;
   if(a>b) swap(a,b);
   for(int i=a;i>=1;i--){
       if(a%i==0 && b%i==0) return cout<<i,0;
   }*//*


    int a,b; cin>>a>>b;
    if(a>b) swap(a,b);
    for(int i=a;i>=1;i--){
        if(a%i==0 && b%i==0) {
            cout<<i;
            break;
        }
    }
    return 0;
}
*/
