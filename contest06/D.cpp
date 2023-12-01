#include <bits/stdc++.h>
using namespace std;

void fast() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}
void file() {
  ios::sync_with_stdio(false);
  auto a = freopen("a.in", "r", stdin);
  auto b = freopen("a.out", "w", stdout);
  if (!a || !b) cout << "OH NO!" << endl;
}

void solve() {
  int n; cin >> n;
  while (n!=0) {
    priority_queue<int,vector<int>,greater<int>> l;
    for (int i = 0; i < n; i++) {
      int temp;
      cin >> temp;
      l.push(temp);
    }
    int ans = 0;
    while (l.size()>1) {
      int sum = l.top();
      l.pop();
      sum += l.top();
      l.pop();
      l.push(sum);
      ans+=sum;
    }
    
    cout << ans << endl;
    
    cin >> n;
  }
}

int main() {
  fast();
  // file();
//   int t;
//   cin >> t;
//   for (int i = 0; i < t; i++) {
//     solve();
//   }

  solve();
}