/*
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
typedef long long ll;
#define fixed(n) cout << fixed << setprecision(n)
#define IAMTRYINGandCRYING ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define sz(x) int(x.size())
int main() {
    IAMTRYINGandCRYING;
//  amount of ice cream they will have after all people will leave from the queue .
// find the number of distressed kids.
ll n,total,disstressed=0; cin>>n>>total;
while(n--){
    char x; int packs_kids_asks; cin>>x>>packs_kids_asks;
    if(x=='+') total+=packs_kids_asks; //7+5
    else{
        if(total>=packs_kids_asks) total-=packs_kids_asks;
        else disstressed++;
    }
}
cout<<total<<" "<<disstressed;

}*/
