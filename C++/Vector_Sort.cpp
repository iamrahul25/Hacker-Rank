#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

    vector<int> v;

    int length;
    cin>>length;

    for(int i=0; i<length; i++){
        int t;
        cin>>t;
        v.push_back(t);
    }

    sort(v.begin(), v.end());
    
    for(int i=0; i<length; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}
