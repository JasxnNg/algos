#include <iostream>
#include <vector>
#include <algorithm>


void solve(){
    int x, y;
    std::cin >> x >> y;

    x % y == 0 ? std::cout << "YES\n" : std::cout << "NO\n";
}

int main(){
    int times; 
    std::cin >> times;
    for (int i = 0; i < times; i++)
        solve();
}
