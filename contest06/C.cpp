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
  int n,g;
  while (cin >> n >> g) {
    int win=0;
    int eq=0;
    priority_queue<int> dif;
    for (int i = 0; i < n; i++)
    {
      int temp1, temp2;
      cin >> temp1 >> temp2;
      if (temp1>temp2) {
        win++;
      } else if (temp1==temp2) {
        eq++;
        dif.push(0);
      } else {
        dif.push(temp1-temp2);
      }
    }
    while (!dif.empty())
    {
      if (g+dif.top()>0) {
        g+=dif.top();
        if (dif.top()==0) eq--;
        dif.pop();
        g--;
        win++;
        // cout << "g: " << g << endl;
        // cout << "win: " << win << endl;
      } else if (g+dif.top()==0) {
        eq++;
        if (dif.top()==0) eq--;
        // cout << "eq: " << eq << endl;
        break;
      } else {
        break;
      }
    }
    cout << win*3+eq << endl;
  }
}

int main() {
  fast();
  // file();
  // int t;
  // cin >> t;
  // for (int i = 0; i < t; i++) {
  //   solve();
  // }

  solve();
}