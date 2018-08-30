#include<bits/stdc++.h>
using
namespace std;
#define ll long long
ll data[26];
int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (n > 26){
        cout << -1 << endl;
    }
    else{
        for (ll i=0;i<(ll)s.size();i++){
            data[s[i]-97]++;
        }
        ll ans = 0;
        for (ll i=0;i<26;i++){
            if (data[i] != 0){
                ans = ans + data[i]-1;
            }
        }
        cout << ans << endl;
    }

    }
