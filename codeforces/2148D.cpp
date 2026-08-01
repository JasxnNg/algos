#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    int cnt_odd = 0;
    cin >> n;
    vector<long long> arr(n, 0);
    long long even = 0;
    long long input = 0;
    for (int i = 0; i < n; i++){
        cin >> input;
        if (input % 2 == 0)
            even += input;
        else {
            arr[cnt_odd] = input;
            cnt_odd++;
        }
    }

    sort(arr.begin(), arr.begin() + cnt_odd);

    long long summa = accumulate(arr.begin() + ((cnt_odd) / 2), arr.begin() + cnt_odd, 0ll);

    if (summa > 0){
        cout << summa + even << '\n';
    }
    else {
        cout << "0\n";
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
