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

void solve() {
  int a;
  cin >> a;
  while (a!=0) {
    vector<string> s(a);
    for (int i = 0; i < a; i++) {
      cin >> s[i];
    }
    sort(s.begin(),s.end());
    string first = s[(a / 2) - 1];
    string second = s[a / 2];
    string ans = "";
    int size = min(first.size(), second.size());
    bool ok = true;
    bool same = true;
    for(int i = 0; i < size; i++) {
        if (first[i] == second[i]) {
            ans += first[i];
        } else {
          // cerr << first << endl;
          same = false;
          char temp = first[i] +1;
          if (temp==second[i]) {
            if(i+1<second.size() && first[i]!='Z' && i!=size-1) {
              ans += temp;
              break;
            }
            ans += first[i];
            // cerr << ans << endl;
            if (i==size-1 && i+2<first.size() && first.size()>second.size()) {
              bool ok2=false;
              for (int k = i+1; k < first.size(); k++)
              {
                if (first[k]!='Z') {
                  char temp2 = first[k] +1;
                  if (k==first.size()-1) {
                    ans += first[k];
                  } else {
                    ans += temp2;
                  }
                  ok2=true;
                  break;
                }
                ans += first[k];
              }
              // if (!ok2) ans += "A";
              
            }
            ok = false;
          } else {
            if (i==size-1 && first.size()<=second.size()) {
              ans += first[i];
              break;
            }
            ans += temp;
            break;
          }
        }
    }
    
    if (first > ans) {
      ans = first;
    }
    if (first.size()==1) {
      ans = first;
    }
    if (first.size()<second.size() && first.size() < ans.size()) {
      ans = first;
    }
    cout << ans << endl;
    cin >> a;
  }
}

int main() {
  fast();
  // file();
  solve();
}
