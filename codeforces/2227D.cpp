#include <bits/stdc++.h>

using namespace std;


int solve(int l, int r, vector<int>arr, int n){
    set<int> remaining;
    for (int i = 0; i <= n; i++)
        remaining.insert(i);

    while (l >= 0 && r < 2*n && arr[l] == arr[r]){
        remaining.erase(arr[l]);
        l--, r++;
    }

    return *remaining.begin();
}


void solve(){
    int n;
    cin >> n;
    n<<=1;
    vector<int>array(n);

    for (int i=0;i<n;i++)
        cin >> array[i];
    
    vector<int>mex(n, 0);

    auto left = find(array.begin(), array.end(), 0);
    auto right = find(array.rbegin(), array.rend(), 0);

    auto left_idx = distance(array.begin(), left);
    // needs base because ??? rend() sussy
    auto right_idx = distance(array.begin(), right.base()) - 1;

    int ans = max({
        solve(left_idx, left_idx, array, n), 
        solve(right_idx, right_idx, array, n), 
        solve((left_idx + right_idx) / 2, (left_idx + right_idx + 1) / 2, array, n)
    });

    cout << ans << "\n";

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
