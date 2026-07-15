#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdint>

void solve(){   
    int n;
    std::cin >> n;
    for (int i = 1; i < n; i += 2){
        std::cout << i + 1 << ' ';
        std::cout << i << ' ';
    }
    std::cout << '\n';
}

int main(){
    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}