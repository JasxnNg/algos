#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>


std::vector<std::vector<int>> adjList(2e5);

// first arg == num guilds / second arg == depth
std::pair<long long, long long> find(int idx){
    std::pair<long long, long long> ret = {0, 0}; 
    if (adjList[idx].size() == 0)
        return {0, 1};
    if (adjList[idx].size() == 1){
        ret = find(adjList[idx][0]); 
        ret.second += 1; 
        return ret;

    }
    long long max_depth = 0; 
    long long second_max_depth = 0;

    for (int i = 0; i < adjList[idx].size(); i++){
        std::pair<long long, long long> child;
        child = find(adjList[idx][i]);
        if (child.second >= max_depth){
            second_max_depth = max_depth;
            max_depth = child.second;
        } else if (child.second > second_max_depth){
            second_max_depth = child.second;
        }
        ret.first += child.first;
    }
    ret.second = max_depth + 1; 
    ret.first += std::min(max_depth, second_max_depth);
    return ret;
}

void solve(){
    int n;
    std::cin >> n;

    int parent;
    long long ret_val = n;
    for (int i = 1; i < n; i++){
        std::cin >> parent;
        adjList[parent - 1].push_back(i);
    }

    ret_val += find(0).first;
    for (int i = 0; i < n; i++){
        adjList[i].clear();
    }

    std::cout << ret_val << '\n'; 

    // // now we just want to see the depth
    // for (auto x : adjList){
    //     for (auto y : x)
    //         std::cout << y << ' '; 
    //     if (x.size() != 0)
    //         std::cout <<'\n';
    // }


}

int main(){
    int iterations; 
    std::cin >> iterations;
    for (int i = 0; i < iterations; i++){
        solve();
    }
}