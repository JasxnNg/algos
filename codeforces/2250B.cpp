#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    if (k >= n - 1)
        cout << "-1\n";
    else{
        std::string output (n, '0');
        // let's just make 0 
        if (k % 2 == 0){
            for (int i = k / 2 + 1; i < k + 2; i++){
                output[i] = '1';
            }
            bool flip = 0; 
            for (int i = k + 2; i < n; i++){
                if (flip)
                    output[i] = '1';
                flip = !flip; // next one is 0
            }
            cout << output << '\n';
        } else {
            for (int i = k / 2 + 1; i < k + 2; i++){
                output[i] = '1';
            }
            bool flip = 0; 
            for (int i = k + 2; i < n; i++){
                if (flip)
                    output[i] = '1';
                flip = !flip; // next one is 0
            }
            cout << output << '\n';
        }

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
