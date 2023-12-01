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

int hPower2 (long long n) {
  int ans = 0;
  for (long long i = n; i >= 1; i = i>>1) ans++;
  return ans;
}

void solve() {
  long long m;cin >> m;
  while(m!=0) {
    vector<long long> pot;
    int maxpot = hPower2 (m);
    // cerr << "maxpot: " << maxpot << endl;
    for (int i = 0; i <= maxpot; i++) {
      for (int j = 0; j <= maxpot; j++) {
        long long p = pow(2,i)*pow(3,j);
        pot.emplace_back(p);
      }
    }
    sort(pot.begin(),pot.end());
    // for (auto x:pot) {
    //   cout << x << " ";
    // }
    // cout << endl;
    for (auto x:pot) {
      if (x-m>=0) {
        cout << x << endl;
        break;
      }
    }
    cin >> m;
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