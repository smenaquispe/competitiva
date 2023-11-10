#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    vector<long long int> v;
    long long int a;

    while (cin>>a)
    {
        v.push_back(a);
        sort(v.begin(),v.end());
        if(v.size()%2==0)
        {
            cout<<(v[v.size()/2]+v[(v.size()/2)-1])/2<<endl;
        }
        else
        {
            cout<<v[v.size()/2]<<endl;
        }
    }
    

    return 0;
}