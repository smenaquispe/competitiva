#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }

        vector<string> names;
        for (int i = 0; i < n; ++i) {
            string name;
            cin >> name;
            names.push_back(name);
        }

        sort(names.begin(), names.end());
        
        string first = names[(n / 2) - 1];
        string second = names[n / 2];

        int size = min(first.size(), second.size());

        for(int i = 0; i < size; i++) {
            if (first[i] == second[i]) {
                cout << first[i] ;
                if(i == size - 1) cout<<endl;
            } else {
                cout<< static_cast<char>(min(first[i], second[i]) + 1) <<endl;
                break;
            }
        }

    }

    return 0;
}

