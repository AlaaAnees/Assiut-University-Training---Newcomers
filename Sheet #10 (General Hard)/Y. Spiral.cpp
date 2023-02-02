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
int main() {
    IAMTRYINGandCRYING;
    ll row,column; cin>>row>>column;
    ll arr[row][column];
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[i][j];
        }
    }
    int r=0,c=0;
    while(r<row && c<column){
        for(int i=c;i<column;i++){
            cout<<arr[r][i]<<" ";
        }
        for (int i = r; i < row;i++) {
            cout<<arr[i][column-1]<<" ";
        }
        column--;
        if(r<row){
            for(int i=column-1;i>=c;i--){
                cout<<arr[row-1][i]<<" ";
            }
            row--;
        }
        if(c<column) {
            for(int i=row-1;i>=r;i--){
                cout<<arr[i][c]<<" ";
            }
            c++;
        }
    }

}
*/
