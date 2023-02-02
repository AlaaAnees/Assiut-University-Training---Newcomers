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
    string line;
    int open = 1;
    while(getline(cin,line)){

        bool flag = 0;
        if(line.length() == 0 || line == " "){
            continue;
        }
        for(int i =0;i<line.length();i++){
            if(line[i] == '/' && line[i+1] == '/' && open){
                break;
            }else if(line[i] == '/' && line[i+1] == '*'){ // i = 3
                i++;
                open = 0;
            } else if(line[i] == '*' && line[i+1] == '/' && !open){ // i = 3
                i++;
                open = 1;
            } else if (open == 1) {
                cout<<line[i];
                flag = 1;
            }
        }
        if(flag && open == 1){
            cout<<endl;
        }

    }
}*/
