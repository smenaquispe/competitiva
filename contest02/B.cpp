#include <bits/stdc++.h>
using namespace std;

void fast() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}
void file() {
  ios::sync_with_stdio(false);
  auto a = freopen("in.txt", "r", stdin);
  auto b = freopen("out.txt", "w", stdout);
  if (!a || !b) cout << "OH NO!" << endl;
}

void solve(int t) {
  string s;
  cin >> s;
  int ans=0;
  int n = s.length();
  for (int i = 0; i < n; i++)
  {
    if (s[i]=='-') {
      if (i+1<n && s[i+1]=='B') {
        continue;
      }
      if (i+2<n && s[i+2]=='B') {
        continue;
      }
      if (i+1<n && s[i+1]=='S') {
        continue;
      }
      if (i>0 && s[i-1]=='S') {
        continue;
      }
      ans++;
    }
  }
  
  cout << "Case " << t+1 << ": " << ans << endl;
}

int main() {
  fast();
  // file();
  
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    solve(i);
  }
  return 0;

  // solve();
}
