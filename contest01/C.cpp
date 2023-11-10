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
  // 30/10/2013 -> 30/10/2015 (+2)mod7
  // 29/05 -> 20/10 (+2+30+31+31+30+30)mod7= (+0)mod7
  cout << "May 29, 2013 Wednesday" << endl;
}

int main() {
  fast();
  
  // long long t;
  // cin >> t;
  // for (long long i = 0; i < t; i++) {
  //   solve();
  // }
  // return 0;

    solve();
}