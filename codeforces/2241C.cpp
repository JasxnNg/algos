#include <vector>
#include <iostream>
#include <algorithm>

void solve(){
    int n;
    std::cin >> n;

    std::vector<int>a(n);
    std::vector<int>b(n);

    for (auto &x : a){
        std::cin >> x; 
    }
    for (auto &x : b){
        std::cin >> x;
    }

    auto max_it = std::max_element(b.begin(), b.end());
    int max_value = *max_it;

    

    for (int i = 0; i < n; i++){
        if (a[i] > b[i]){
            std::cout << "NO\n";
            return;
        }
        else {
            if (i == n - 1){
                std::cout << "YES\n";
            } else {
                a[i + 1] -= std::min(b[i] - a[i], max_value); 
                // fuck this is just wrong lol 
            }

        }
    }

}

int main(){
    int iterations;
    std::cin >> iterations;

    for (int i = 0; i < iterations ; i++){
        solve();
    }
}