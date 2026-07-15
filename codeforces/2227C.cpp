#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> inputs(n);
    for (int i = 0; i < n; i++){
        cin >> inputs[i];
        if (inputs[i] % 2 == 0 && inputs[i] % 3 == 0)
            cout << inputs[i] << ' ';
    }
    for (int i = 0; i < n; i++){
        if (inputs[i] % 2 == 0 && inputs[i] % 3 != 0)
            cout << inputs[i] << ' ';
    }

    for (int i = 0; i < n; i++){
        if (inputs[i] % 2 != 0 && inputs[i] % 3 != 0)
            cout << inputs[i] << ' ';
    }

    for (int i = 0; i < n; i++){
        if (inputs[i] % 3 == 0 && inputs[i] % 2 != 0)
            cout << inputs[i] << ' ';
    }
    cout << "\n";
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
