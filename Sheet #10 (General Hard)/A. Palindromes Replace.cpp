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
bool check(string word){
    int size = word.size() / 2; // 4 / 2 = 2    0 1 2
    bool res = true;
    for(int i=0,j=word.size()-1;i<size;i++,j--){ // 0  3
        if(word[i] == word[j] || (word[i] == '?' && word[j] !='?') ||
           (word[i] != '?' && word[j] =='?') || word == "?"){
            res = true;
        } else {
            res = false;
            break;
        }
    }
    return res;
}
int main() {
    IAMTRYINGandCRYING;
    string value; //  "?bba" "abb?" "?bb?"
    cin>>value;
    int size = value.size() / 2;
    if(value != "?"){ // "?"
        if(check(value)){ // "ab?ba" i =2 j = 2   i <= 2
            for(int i=0,j=value.size()-1;i<=size;i++,j--){
                if(value[i] == '?' && value[j] != '?'){
                    value[i] = value[j];
                } else if (value[i] != '?' && value[j] == '?'){
                    value[j] = value[i];
                } else if(value[i] == '?' && value[j] == '?'){
                    value[i] = 'a';
                    value[j] = 'a';
                }
            }
            cout<<value<<endl;
        }
        else cout<<-1<<endl;

    }
    else cout<<"a"<<endl;


}*/
