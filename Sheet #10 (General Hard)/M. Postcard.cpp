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
int main() {
    IAMTRYINGandCRYING;
    // Candy cane means that the letter before it can be removed, or can be left.
    // A snowflake means that the letter before it can be removed, left, or repeated several times.
    string s; int k,candy=0,snow=0,cnt=0; cin>>s>>k;
    for(int i=0;i<s.length();i++){
        if(s[i]=='*'){
            snow++;
            candy=1;
        }
        else if(s[i]=='?') snow++;
        else cnt++; //letters
    }
    // k the max length
    // cnt-k>candy it's impossible
    if(cnt>k && cnt-k>snow) cout<<"Impossible"<<endl;
    else if(cnt<k && candy==0) cout<<"Impossible"<<endl;
    else{
        int diff=k-cnt; //k is the length, cnt is the letters
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='*' || s[i]=='?') continue;
            if(i<n-1 && (s[i+1]=='*' || s[i+1]=='?') && diff<0) diff++;
            else if(i<n-1 && s[i+1]=='*' && diff>0){
                cout<<s[i];
                while(diff>0){
                    cout<<s[i];
                    diff--;
                }
            }
            else cout<<s[i];
        }
    }

}
*/

