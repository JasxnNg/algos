#include <bits/stdc++.h>

using namespace std;

void solve(){
    int s, k, m;
    cin >> s >> k >> m;

    if (m < k)
        cout << max(0, s - m) << '\n';
    else if (k <= s){
        // period is less and we need to consider % 2 -> two flips means we start from s
        // subtract 
        if ((m / k) % 2 == 0) {
            cout << s - (m % k) << '\n'; 
        } else { // we have k sand and we flipped 
            cout << k - (m % k) << '\n';
        }
    } else {
        // s < k
        cout <<  max (0, s - (m % k)) << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
