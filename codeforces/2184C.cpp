#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;

    if (n == x){
        cout << "0\n"; 
        return; 
    }
    queue<pair<int, int>>q; 
    q.push({n, 0});
    while (q.size() > 0){
        auto head = q.front();
        q.pop();

        
        if (head.first % 2 == 0){
            if (head.first / 2 == x){
                cout << head.second + 1 << '\n';
                return;
            } else if (head.first > x){
                q.push({head.first /2,head.second+1});
                // cout << "pushed" << head.first;
            }
        } else {
            if (head.first / 2 == x || (head.first / 2 + 1) == x ){
                cout << head.second + 1 << '\n';
                return;
            }   
            else if (head.first / 2 > x){
                q.push({head.first / 2,head.second+1});
                q.push({head.first/2 + 1,head.second+1});
                // cout << "pushed" << head.first; 

            }

        }

    }
    cout << "-1\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
