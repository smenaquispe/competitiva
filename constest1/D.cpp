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

vector<vector<int>> pattern1;
vector<vector<int>> pattern2;

void rotate (int n) {
  vector<vector<int>> temp = pattern1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      pattern1[j][n-1-i]=temp[i][j];
    }
  }
}

void reflect (int n) {
  vector<vector<int>> temp = pattern1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      pattern1[n-1-i][j]=temp[i][j];
    }
  }
}

bool compare (int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (pattern1[i][j]!=pattern2[i][j]) {
        return false;
      }
    }
  }
  return true;
}

void print (int n) {
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n; j++) {
  //     cout << pattern1[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  for(auto x:pattern1) {
    for (auto y:x) {
      cout << y << " ";
    }
    cout << endl;
  }
}

void solve(int n, int t) {
  vector<vector<int>> temp2;
  pattern1=temp2;
  pattern2=temp2;
  for (int i = 0; i < n; i++) {
    vector <int> p(n,0);
    pattern1.emplace_back(p);
    pattern2.emplace_back(p);
    for (int j = 0; j < n; j++) {
      char t;
      cin >> t;
      if (t=='X') {
        pattern1[i][j]=1;
      }
    }
    for (int j = 0; j < n; j++) {
      char t;
      cin >> t;
      if (t=='X') {
        pattern2[i][j]=1;
      }
    }
  }

  if(compare(n)) {
    cout << "Pattern " << t << " was preserved." << endl;
    return;
  }
  for (int i = 0; i < 4; i++)
  {
    // cout << "-------------" << endl;
    // print(n);
    // cout << "-------------" << endl;
    rotate(n);
    if (compare(n)) {
      cout << "Pattern " << t << " was rotated " << (i+1)*90 << " degrees." << endl;
      return;
    }
  }
  reflect(n);
  if(compare(n)) {
    cout << "Pattern " << t << " was reflected vertically." << endl;
    return;
  }
  for (int i = 0; i < 3; i++)
  {
    // cout << "-------------" << endl;
    // print(n);
    // cout << "-------------" << endl;
    rotate(n);
    if (compare(n)) {
      cout << "Pattern " << t << " was reflected vertically and rotated " << (i+1)*90 << " degrees." << endl;
      return;
    }
  }
  cout << "Pattern " << t << " was improperly transformed." << endl;
  return;
  




  // rotate(n);
  // print(n);
  // cout << "-------------" << endl;
}

int main() {
  fast();
  // file();
  
  int n;
  int t = 0;
  while(cin >> n) {
    t++;
    solve(n,t);
  }

  // int t;
  // cin >> t;
  // for (int i = 0; i < t; i++) {
  //   solve();
  // }

  // solve();
}
