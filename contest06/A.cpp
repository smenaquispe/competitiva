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
  int n;
  cin >> n;
  vector<int> coins(n);
  cin >> coins[0];
  for (int i = 1; i < n; i++) {
    cin >> coins[i];
  }
  int ans = 1;
  int sum = 0;
  for (int i = 0; i < n-1; i++)
  {
    if (sum+coins[i]<coins[i+1]) {
      ans++;
      sum+=coins[i];
    }
  }
  cout << ans << endl;
}

int main() {
  fast();
  // file();
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    solve();
  }

  // solve();
}