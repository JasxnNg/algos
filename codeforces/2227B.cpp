#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    string parentheses(n, 'p');
    cin >> parentheses;

    int accum = 0;
    for (int i = 0; i < n; i++){
        if (parentheses[i] == '(')
            accum -=1;
        else
            accum +=1;
    }

    accum == 0 ? cout << "YES\n" : cout << "NO\n";

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
