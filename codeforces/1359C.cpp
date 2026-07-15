#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdint>

void solve(){
    int h{}, c{}, t{};
    
    std::cin >> h >> c >> t;
    if (t <= (h+c)/2)
        std::cout << 2 << '\n';
    else {

        std::cout << '1' << '\n';
    }
}

int main(){
    int t;
    std::cin >> t;
    while (t--){
        solve();
    }
}