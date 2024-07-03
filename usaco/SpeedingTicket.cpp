#include <algorithm>
#include <cstdio>
#include <vector>
#include <iostream>
using namespace std; 

int main () {
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);
    int lenRoad, segments; 

    scanf("%d %d", &lenRoad, &segments); 

    vector<int> road(lenRoad * 2);
    vector<int> partition(segments * 2);
    for (int i = 0; i < lenRoad; i++) {
        cin >> road[2 * i ] >> road[2 * i + 1]; 
        //cout << road[2 * i ] << " ";
    }
    for (int i = 0; i < segments; i++) {
        cin >> partition[2 * i ] >> partition[2 * i + 1];
    }

    int first = 0, second = 0; 
    int temp = 0; 
    int max = 0;
    // next is the logic for looping through the jawn 
    for (int i = 0; i < 100; i ++ ) {
        road[first]--; 
        partition[second]--; 

        if (road[first] < 0) {
            first = first + 2; 
            road[first]--; 
        }
        if (partition[second] < 0) {
            second = second + 2; 
            partition[second]--; 
        }
        
        temp = partition[second + 1] - road[first + 1]; 
        if (temp > max)
            max = temp; 
        

    }
    cout << max; 

} 