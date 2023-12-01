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
  int n,l,c;
  string s;
  while(cin>>n>>l>>c) {
      int len,line=1,p=0;
      cin>>s;
      len=s.size();
      for(int i=0;i<n-1;i++) {
        cin>>s;
        if((len+s.size()+1)<=c) {
            len+=s.size()+1;
        } else {
            line++;
            len=s.size();
        }
      }
      p=line/l;
      if(line%l) p++;
      cout << p << endl;

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