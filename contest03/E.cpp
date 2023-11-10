#include <bits/stdc++.h>
using namespace std;

int t;
long long n, m;
void solve(){
    cout << n << " " << m << "\n";
    vector<vector<int>> a(m);
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        a[temp%m].emplace_back(temp);
    }
    vector<int> even, odd;
    for(auto &x : a){
        even.clear(), odd.clear();
        for(auto y: x) {
            if(y%2) odd.emplace_back(y);
            else even.emplace_back(y);
        }
        sort(even.begin(), even.end());
        sort(odd.rbegin(), odd.rend());
        for(auto y : odd) cout << y << endl;
        for(auto y : even) cout << y << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.precision(6);
    while(true){
        cin >> n >> m;
        if(n == 0 && m == 0) break;
        solve();
    }
    cout << "0 0" << endl;
    return 0;
}
