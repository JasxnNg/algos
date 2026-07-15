#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdint>
#include <numeric>
#include <climits>


void solve(){   
    int n, m;
    std::cin >> n >> m;
    std::vector<int> arr(n+1);
    std::vector<int> bj(n+1, 0);

    int current = 0;
    for(int i = 1; i <= n; i++)
        std::cin >> arr[i];
    for(int i=0;i<m;i++){
        std::cin >> current;
        bj[current] = 1;
    }

    long long pos = 0;
    long long neg = LLONG_MIN >> 1;
    long long best = 0;
    for (int i = n; i >= 1; i--){
        if (bj[i]){
            best = std::max(pos, neg);
            pos = best + arr[i];
            neg = best - arr[i];
        } else {
            pos += arr[i];
            neg -= arr[i];
        }
    }

    std::cout << std::max(pos, neg) << '\n';


}

int main(){
    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}