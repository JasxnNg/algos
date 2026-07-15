#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdint>
#include <numeric>

void solve(){   
    int n;
    std::cin >> n;

    int x, y;
    std::cin >> x >> y;

    int z = std::gcd(x, y);
    int input; 
    bool possible = true;
    for (int i = 1; i <= n; i++){
        std::cin >> input;
        possible &= (input % z == i %z);
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