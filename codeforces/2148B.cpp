#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int ex; 
    for (int i = 0; i < n + m; i++){
        cin >> ex;
    }
    cout << n + m << "\n";
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
