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
    int r1, r2, c1, c2, diagonal1, diagonal2;
    cin >> r1 >> r2 >> c1 >> c2 >> diagonal1 >> diagonal2;
    for (int a = 1; a < 10; a++) {
        for (int b = 1; b < 10; b++) {
            for (int c = 1; c < 10; c++) {
                for (int d = 1; d < 10; d++) {
                    if (a != b && a != c && a != d && b != c && b != d && c != d) {
                        if (a + b == r1 && a + d == diagonal1 && c + d == r2 &&
                            a + c == c1 && b + d == c2 && b + c == diagonal2) {
                            cout << a << " " << b << endl;
                            cout << c << " " << d << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
    cout<<-1<<endl;
}
*/




