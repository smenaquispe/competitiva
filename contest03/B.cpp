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
  int n;
  cin >> n;
  string namemin, namemax;
  vector<int> minis(3,5000);
  vector<int> maxis(3,0);
  for (int j = 0; j < n; j++) {
    string s; 
    cin >> s;
    vector<int> input(3,0);
    for (int i = 0; i < 3; i++)
    {
      cin >> input[i];
    }
    // cout << s << " nacio en el año " << input[2] << endl;
    // mayores
    if (input[2]<minis[2]) {
      namemin = s;
      for (int i = 0; i < 3; i++)
      {
        minis[i]=input[i];
      }
    } else {
      if (input[2]==minis[2]) {
        if(input[1]<minis[1]) {
          namemin = s;
          for (int i = 0; i < 3; i++)
          {
            minis[i]=input[i];
          }
        } else {
          if(input[1]==minis[1]) {
            if (input[0]<minis[0]) {
              namemin = s;
              for (int i = 0; i < 3; i++)
              {
                minis[i]=input[i];
              }
            }
          }
        }
      }
    }

    //menores
    // cout << input[2]<< ">" <<maxis[2] << "?"<<  endl;
    if (input[2]>maxis[2]) {
      namemax = s;
      for (int i = 0; i < 3; i++)
      {
        maxis[i]=input[i];
      }
      
    } else {
      if (input[2]==maxis[2]) {
        if(input[1]>maxis[1]) {
          namemax = s;
          for (int i = 0; i < 3; i++)
          {
            maxis[i]=input[i];
          }
        } else {
          if(input[1]==maxis[1]) {
            if (input[0]>maxis[0]) {
              namemax = s;
              for (int i = 0; i < 3; i++)
              {
                maxis[i]=input[i];
              }
            }
          }
        }
      }
    }
    // cout << namemax << " <- menor actual y tiene" << maxis[2] << endl;
    // cout << "--------------" << endl;

  }
  cout << namemax << endl;
  cout << namemin << endl;
  
}

int main() {
  fast();

    solve();
}