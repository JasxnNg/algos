#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdint>

void solve(){   
    int n;
    std::cin >> n;


    // if the prefix (if its >= n (n + 1) / 2) then good 
    long long cnt = 0;
    long long accum = 0;
    bool possible = true; 
    for (int i = 1; i <= n; i++){
        std::cin >> cnt; 
        accum += cnt;
        long long poop = (long long)i * (i + 1) / 2;
        possible &= (poop <= accum);
    }
    if (possible)
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}

int main(){
    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}