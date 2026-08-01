#include <bits/stdc++.h>

using namespace std;

void solve(){

    // if it exceeds n/k then we reject
    // sliding window
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    unordered_map<int, int>mp;
    for (int i = 0; i < n; i++){
        cin >> a[i]; 
        if (mp.find(a[i]) == mp.end()){
            mp[a[i]] = 1;
        } else {
            mp[a[i]]++;
        }
    }

    for (auto it = mp.begin(); it != mp.end(); it++){
        if (it->second % k != 0){
            cout << "0\n";
            return;
        }
    }
    unordered_map<int, int>wind;
    long long total = 0;
    int right = 0;
    for (int i = 0; i < n; i++){
        while (right < n){
            if (wind.find(a[right]) == wind.end()){
                wind[a[right]] = 1;
                right++;
            } else {
                if (wind[a[right]] + 1 > mp[a[right]] / k){
                    break;
                } else {
                    wind[a[right]]++;
                    right++; // advance right 
                }
            }
        }
        // cout << i << "  " << right << " \n";
        total += (right - i);
        wind[a[i]] -= 1;
    }
    cout << total << "\n";

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
