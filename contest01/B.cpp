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
  long long n;
  cin >> n;
  long long r = (-1+sqrt(1+8*n))/2;
  cout << r << endl;
}

int main() {
  fast();
  
  long long t;
  cin >> t;
  for (long long i = 0; i < t; i++) {
    solve();
  }
  return 0;

    solve();
}