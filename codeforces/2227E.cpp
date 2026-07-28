#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>arr(n);
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long long cubes = 0;
    int running_min = arr[n-1] + 1;
    int poop = 0;
    int maxpoop = 0;
    for (int i = n - 1; i >= 0; i--){
        if (arr[i] >= running_min){
            poop += 1; // imagine 
                     // we took the -1 so that means >= running min should be pushed back 
        } else {
            poop = 0;
            running_min = arr[i]; // if we took the -1 here
        }
        cubes +=  arr[i] - running_min;
        maxpoop = max(maxpoop, poop);
        
    }
    cout << maxpoop + cubes << '\n';
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
