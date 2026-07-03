#include <vector>
#include <iostream>
#include <algorithm>



void solve(){
    int n; 
    std::cin >> n;
    long long accum = 0; 
    for (int i = 1; i <= n; i++){
        accum += 1LL * (n / i) * (n / i);
    }
    std::cout << accum << '\n';
}

int main(){
    int iterations; 
    std::cin >> iterations;
    for (int i = 0; i < iterations; i++){
        solve();
    }
}
