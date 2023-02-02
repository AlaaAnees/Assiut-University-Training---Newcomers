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
#define RUN ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define loop1(n) f(int i = 0; i < n; i++)
#define loop2(n) f(int j = 0; j < n; j++)
//int freq[100007];
int main() {
    RUN;
    */
/*string s; cin>>s;
    sort(s.begin(),s.end());

    for(int i=0;i<s.length();i++){
        freq[s[i]]++;

    }
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" : "<<freq[s[i]]<<endl;
        if(s[i]==s[i+1]) i+=2;
        if(s[s.length()-1]) cout<<s.length()-1;
    }*//*




    ///             Time :  405 ms
    string s; cin>>s;
    int freq=1;
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]) freq++;
        else {
            cout<<s[i]<<" : "<<freq<<endl;
            freq=1;
        }
    }

}
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
//int freq[100007];
int ch[26]={}; //numerical 26 letter
int main() {
    IAMTRYINGandCRYING;

    // let's optimize and reduce time

  string s; cin>>s;
  for(int i=0;i<s.length();i++) ch[s[i]-'a']++;

  for(int i=0;i<26;i++){
      if(ch[i]>0) cout<<char(int('a')+i)<<" : "<<ch[i]<<endl;
  }
}*/



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
int freq[26];
//int ch[26]={}; //numerical 26 letter
int main() {
    IAMTRYINGandCRYING;
    // A third solution To GOO.

    //consists of only lowercase English letters => a= 97 z=122
    string s; cin>>s;
    //int x=0;
    for(int i=0;i<s.length();i++){
        //x=s[i];
        freq[s[i]]++;
    }
    for(int i=97;i<122;i++) {
        if (freq[i]> 0) {
            cout << char(i) << " : " << freq[i] << endl;
        }
    }



}*/
