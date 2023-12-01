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

string D = "";

void DtoB (vector<vector<char>> &B, int yini, int xini, int ytam, int xtam) {
  char s;
  if (xtam == 0 || ytam == 0) return;
  cin >> s;
  if (s!='D') {
    for (int i = 0; i < ytam; i++) {
      for (int j = 0; j < xtam; j++) {
        B[yini+i][xini+j] = s;
      }
    }
    // cout << "-----s:" << s << "------" << endl;
    // for (auto i:B) {
    //   for (auto j:i) {
    //     cout << j << " ";
    //   }
    //   cout << endl;
    // }
    // cout << "-----------" << endl;
  } else {
    // cout << "-----s:" << s << "------" << endl;
    int a = (ytam+1)/2;
    int b = ytam-a;
    int c = (xtam+1)/2;
    int d = xtam-c;
    DtoB (B, yini, xini, a, c);
    DtoB (B, yini, xini+c, a, d);
    DtoB (B, yini+b, xini, b, c);
    DtoB (B, yini+b, xini+c, b, d);
  }
}

void BtoD (string _D, string s, int y, int x) {
  D = _D;
  bool ok = true;
  if (s.length() == 0) return;
  for (auto c:s) {
    if (s[0]!=c) {
      ok = false;
      break;
    }
  }
  if (ok) {
    D += s[0];
  } else {
    D += 'D';
    int a = (y+1)/2;
    int b = y-a;
    int c = (x+1)/2;
    int d = x-a;

    //top-left
    string tl = "";
    for (int i = 0; i < a*x; i++) {
      if (i%x<c) tl += s[i];
    }
    // cerr << tl << endl;
    BtoD (D, tl, a, c);

    //top-right
    string tr = "";
    for (int i = 0; i < a*x; i++) {
      if (i%x>=c) tr += s[i];
    }
    // cerr << tr << endl;
    BtoD (D, tr, a, d);

    //bottom-left
    string bl = "";
    for (int i = a*x; i < x*y; i++) {
      if (i%x<c) bl += s[i];
    }
    // cerr << bl << endl;
    BtoD (D, bl, b, c);

    //bottom-right
    string br = "";
    for (int i = a*x; i < x*y; i++) {
      if (i%x>=c) br += s[i];
    }
    // cerr << br << endl;
    BtoD (D, br, b, d);
  }
  return;
}

int hPower10 (int n) {
  int ans = 0;
  for (int i = n; i >= 1; i = i/10) ans++;
  return ans;
}

void printSpace (int n) {
  for (int i = 0; i < n; i++)
  {
    cout << " ";
  }
  
}

void solve() {
  char t;
  cin >> t;
  while (t!='#') {
    int x,y;
    cin >> y >> x;
    if (t=='B') {
      string s = "";
      char temp;
      for (int i = 0; i < x*y; i++)
      {
        cin>>temp;
        s+=temp;
      }
            
      
      cout << "D" << right << setw(4) << y << right << setw(4)<< x << endl;
      BtoD("",s,y,x);
      cout << D[0];
      for (int i = 1; i < D.length(); i++) {
        if (i%50==0) cout << endl;
        cout << D[i];
      }
      cout << endl;
    } else {
      cout << "B" << right << setw(4) << y << right << setw(4)<< x << endl;
      vector<vector<char>> B (y, vector<char> (x,'*'));
      // B[0][2] ='x';
      DtoB(B,0,0,y,x);
      int idx = 1;
      for (auto i:B) {
        for (auto j:i) {
          cout << j;
          idx++;
          if (idx%50==0) cout << endl; 
        }
      }
      cout << endl;
    }
    cin >> t;
  }
  
}

int main() {
  file();
  fast();
  
//   int t;
//   cin >> t;
//   for (int i = 0; i < t; i++) {
//     solve();
//   }

  solve();
}