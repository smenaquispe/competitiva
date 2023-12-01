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
  int casenum = 1;
  int n; cin >> n;
  while (n!=0) {
    int sum = 0;
    int ans = 0;
    set<tuple<int, int, int>> p;
    for (int i = 0; i < n; i++)
    {
      int x,y;
      cin >> x >> y;
      sum+=x;
      p.insert(make_tuple(y,x+y,x));
    }
    for (auto terna : p)
    {
      ans = max (ans, sum+get<0>(terna));
      sum-=get<2>(terna);
    }
    
    cout << "Case " << casenum << ": " << ans << endl;
    casenum++;
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