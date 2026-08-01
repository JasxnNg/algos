#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>>arr(n);
    int a, b;
    for (int i =0; i < n; i++){
        cin >> a >> b;
        arr[i] = {a, b};
    }
    int currtime = 0;
    int val = 0;
    int side = 0;
    for (int i = 0; i < n; i++){
        a = arr[i].first - currtime;
        
        if (side != arr[i].second){
            // need to run an odd amount
            if (a % 2 == 0)
                val += (a - 1); 
            else 
                val += a; 
        } else {
            val += (a / 2) * 2; 
        }

        currtime = arr[i].first;
        side = arr[i].second;
        
    }
    val += (m - currtime);
    cout << val << '\n';
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
