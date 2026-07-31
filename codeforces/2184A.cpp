#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    if (n <=3)
        cout << n << '\n';
    else {
        cout << (n % 2 == 0 ? 0 : 1) << '\n';
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
