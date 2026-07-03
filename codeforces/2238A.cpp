#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdint>


void solve(){
    int n, c; 
    std::cin >> n >> c; 
    std::vector<int>a(n); 
    std::vector<int>b(n);

    for (auto &x : a){
        std::cin >> x; 
    }
    for (auto &x : b){
        std::cin >> x;
    }

    int m1 = 0;
    for (int i = 0; i < n; i++){
        if (b[i] > a[i]){
            m1 = INT32_MAX;
            break;
        } else {
            m1 += (a[i] - b[i]);
        }
    }

    int m2 = c; 
    std::sort(a.begin(), a.end()); 
    std::sort(b.begin(), b.end());

    for (int i = 0; i < n ; i++){
        if (b[i] > a[i]){
            m2 = INT32_MAX;
            break;
        } else {
            m2 += (a[i] - b[i]);
        }
    }

    int result = std::min(m1, m2); 
    if (result == INT32_MAX){
        std::cout << -1 << '\n'; 
    } else {
        std::cout << result << '\n';
    }
        
    




}

int main(){
    int iterations; 
    std::cin >> iterations;
    
    for (int i = 0; i < iterations; i++){
        solve();
    }


}
