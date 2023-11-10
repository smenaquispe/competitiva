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
  int v,t;
  while(cin >> v >> t) {
    cout << 2*v*t << endl;
  }
}

int main() {
  fast();
  
//   int t;
//   cin >> t;
//   for (int i = 0; i < t; i++) {
//     solve();
//   }

    solve();
}