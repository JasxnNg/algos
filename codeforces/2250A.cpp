#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n; 
    cin >> n;

    vector<int>arr(n+2,0); 
    vector<int>possible(n);
    for (int i = 1; i < n+1; i++){
        cin >> arr[i];
        possible[i-1] = arr[i] + 1; 
    }
    if (n % 2 != 0){
        cout << "NO\n";
        return;
    }
    // 0 and n + 1 are empty


    for (int i = 0; i < n; i++){
        int k = possible[i];
        // cout << "poop" <<  k << "\n";
        bool possible = true;
        for (int j = 0; j < n; j += 2){
            // cout << " " << j + 1 << " " << j + 2;
            if ( arr[j + 1] <= k || arr[j+2] >= k){
                possible = false;
                break;
            }
        }
        // cout << "\n";
        if (possible) {
                cout << "YES\n";
                return;
        }


    }

    cout << "NO\n"; 
    return;

    // k + 1 -> good type shit
    

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
