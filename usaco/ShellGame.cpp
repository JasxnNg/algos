#include </Users/jasxnng/Work/algos/usaco/stdc++.h>
using namespace std;

int main() {
    int max = 0; 
    int picks[3] = {1, 2, 3}; 
    int vals[3] = {0, 0, 0}; 
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int loop; 
    int guess; 
    int first; 
    int swap1;

    int temp1; 
    int temp2; 
    cin >> loop; // take in the amount of times it loops 
    for (int i = 0; i < loop; i++) {
        cin >> first >> swap1 >> guess; 
        // find the indices of the picks and swap 
        for (int j = 0; j < 3; j++){
            if (picks[j] == first) {
                temp1 = j; 

            }
            else if (picks[j] == swap1) {
                temp2 = j; 
            }

        }
        swap(picks[temp1], picks[temp2]);
        // swap the thing from first to the swap value

        for (int j = 0; j < 3; j++) {
            if (picks[j] == guess) {
                vals[j] = vals[j] + 1;
                if (vals[j] > max)
                    max = vals[j];
            }
                 
        }

    }
    cout << max; 
    return 0; 
}