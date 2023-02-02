/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define fixed(n) cout << fixed << setprecision(n)
#define all(v) ((v).begin()), ((v).end())
#define test int t;cin>>t;while(t--)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    IOS;
    int n,m; cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x; cin>>x;
            if(x==arr[i][j]) {
                cout<<"will not take number\n";
                return 0;
            }
        }
    }
    cout<<"will take number\n";
}
*/









/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define fixed(n) cout << fixed << setprecision(n)
#define all(v) ((v).begin()), ((v).end())
#define test int t;cin>>t;while(t--)
#define RUN ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define loop1(n) f(int i = 0; i < n; i++)
#define loop2(n) f(int j = 0; j < n; j++)
int main() {
    RUN;
    int n,m,flag=true; cin>>n>>m;
    int arr[n*m];
    for(int i=0;i<n*m;i++) cin>>arr[i];
    int x; cin>>x;
    for(int i=0;i<n*m;i++){
        if(arr[i]==x) flag=false;
    }
    if(flag==false) cout<<"will not take number\n";
    else if(flag==true) cout<<"will take number\n";
}*/






                  //wrong answer in test 2
/*
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define EPS 1e-9
#define fixed(n) cout << fixed << setprecision(n)
#define all(v) ((v).begin()), ((v).end())
#define test int t;cin>>t;while(t--)
#define RUN ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define loop1(n) f(int i = 0; i < n; i++)
#define loop2(n) f(int j = 0; j < n; j++)
int main() {
    RUN;
    int n,m,freq[1000]; cin>>n>>m;
    int arr [n][m];
    for(int i=0;i<n;i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            freq[arr[i][j]]++;
        }
    }

        int x; cin>>x;
        if(freq[x]>0) cout<<"will not take number\n";
        else cout<<"will take number\n";

}
*/













