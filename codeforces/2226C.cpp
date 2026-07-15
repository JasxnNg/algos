#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

void solve(){
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++){
        std::cin >> arr[i];
    }

    std::multiset<int>ts(arr.begin(), arr.end());
    int i{0};

    // this is wrong, we need to do a log(n) search for it
    while (ts.size() > 0){
        auto it = ts.lower_bound(i); 
        if (it != ts.end() && *it == i){
            i++;
            ts.erase(it);
        } else {
            auto it2 = ts.upper_bound(i * 2); 
            if (it2 != ts.end()) {
                i++;
                ts.erase(it2);
            }
            else
                break;
        }
    }
    std::cout << i << '\n';
    
    
}

int main(){
    int iter; 
    std::cin >> iter; 
    for (int i = 0; i < iter; i++){
        solve();
    }

}

