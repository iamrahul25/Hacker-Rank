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

    int x,a,b;
    cin>>x>>a>>b;
    
    v.erase(v.begin()+(x-1));
    v.erase(v.begin()+(a-1),v.begin()+(b-1));

    cout<<v.size()<<endl;
    
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}
