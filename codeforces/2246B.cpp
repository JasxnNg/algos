#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdint>

void solve(){   
    int n;
    std::cin >> n;
    if (n == 1)
        std::cout << "1\n";
    else if (n == 2)
        std::cout << "-1\n";
    else {
        std::cout << "1 2 3 ";
        long long j = 3;
        for (int i = 3; i < n; i++){
            j <<=1;
            std::cout << j << ' ';
        }
        std::cout << '\n';
    }
}

int main(){
    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}