#include<iostream>
#include<vector>
using namespace std;

/*
    recieve the land
*/
void battle(vector<vector<int>> & land, vector<vector<int>> copy,  int n, int r, int c) {
    
    // vector<vector <int>> copy(r, vector<int>(c, 0));
    // for(int i = 0; i < r; i++) {
    //     for(int j = 0; j < c; j++) {
    //         copy[i][j] = land[i][j];
    //     }
    // }

    int anterior = land[0][0];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(i > 0) {
                anterior = copy[i - 1][j];
                if(anterior == copy[i][j] - 1 || (anterior == n - 1 && copy[i][j] == 0)) {
                    land[i][j] = anterior;
                }
            }
            if(i != r - 1) {
                anterior = copy[i + 1][j];
                if(anterior == copy[i][j] - 1 || (anterior == n - 1 && copy[i][j] == 0)) {
                    land[i][j] = anterior;
                }
            }
            if(j > 0) {
                anterior = copy[i][j - 1];
                if(anterior == copy[i][j] - 1 || (anterior == n - 1 && copy[i][j] == 0)) {
                    land[i][j] = anterior;
                }
            }
            if(j != c - 1) {
                anterior = copy[i][j + 1];
                if(anterior == copy[i][j] - 1 || (anterior == n - 1 && copy[i][j] == 0)) {
                    land[i][j] = anterior;
                }
            }
        }
    }

}

int main() {

    int n, r, c, k;
    

    /* n -> number of heirs */
    /* r and c -> dimensions of kingdom */
    /* k -> number of battles */

    /*
        set the land
    */

    cin>>n>>r>>c>>k;
   while (n != 0 && r != 0 && c != 0 && k != 0)
   {
    /* code */
    
        vector<vector<int>> land(r, vector<int>(c, 0));
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                cin>>land[i][j];
            }
        }
        
        for(int i = 0; i < k; i++) {
            battle(land, land, n, r, c);
        }

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if (j == c - 1)
                {
                    cout<<land[i][j];
                }
                else
                {
                    cout<<land[i][j]<<" ";
                }
            }
            cout<<endl;
        }
        cin>>n>>r>>c>>k;
   }

    return 0;
}