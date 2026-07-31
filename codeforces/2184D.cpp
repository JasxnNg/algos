#include <bits/stdc++.h>

using namespace std;


int choose[31][31];

void solve(){
    int n, k; 
    cin >> n >> k;
    int poop = 31 - __builtin_clz(n);
    int ans = 0;
    for (int msb = 0; msb < poop; msb++) {
        for (int set = 1; set <= msb + 1; set++) {
            if (msb + set <= k)
                continue;
            ans += choose[msb][set - 1];
        }
    }

    if (poop + 1 > k) 
        ++ans;
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 31; i++){
        for (int j = 0; j < 31; j++){
            if (j == 0)
                choose[i][j] = 1; 
            else {
                choose[i][j] = choose[i-1][j] + choose[i-1][j-1];
            }
        }
    }
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
