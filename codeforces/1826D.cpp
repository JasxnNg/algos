#include <vector>
#include <iostream>
#include <algorithm>
#include <set>

void solve(){
    int n; 
    std::cin >> n;

    std::vector<int> input(n);

    for (int i = 0; i < n; i++)
        std::cin >> input[i];

    std::vector<int> left(n);
    // contains max prefix for left + l
    std::vector<int> right(n);
    // contains max suffix for right - r
    left[0] = input[0]; 
    right[n-1] = input[n-1]-(n-1);
    for (int i = 1; i < n; i++){
        left[i] = std::max(left[i-1], input[i] + i);  
        right[n-i-1] = std::max(right[n-i], input[n-i-1] -(n-i-1));
    }
    int result=0;
    for (int i=1; i<n-1; i++){
        result=std::max(result, left[i-1]+input[i]+right[i+1]);
    }
    std::cout << result << '\n';

}

int main(){
    int n;
    std::cin >> n;
    while (n--){
        solve();
    }
}