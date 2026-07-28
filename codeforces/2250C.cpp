#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int len = 0;
    vector<tuple<int, int, int, int>>arr(n);
    for (int i = 0; i < n; i++){
        // is it the case that we can always make length m array?
        // we can simply iterate down from n 
        int l, r, u, v;
        cin >> l >> r >> u >> v;
        arr[i] = make_tuple(l, r, u, v);
    }

    for (int i = n; i > 0; i--){
        int left = n - i;
        int index = 1; 
        for (int j = 0; j < n; j++){
            if ((get<0>(arr[j]) <= index && index <= get<1>(arr[j]))
                || (get<2>(arr[j]) <= i - index + 1 
                && i - index + 1 <= get<3>(arr[j])))
                left -= 1; 
            else {
                index += 1; // not in the don't add interval
            }

            if (left < 0)
                break;
        }

        if (left >= 0) {
            cout << i << '\n';
            return;
        }
    }
    cout << "0\n";

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
