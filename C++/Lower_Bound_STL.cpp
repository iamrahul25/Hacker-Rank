#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    
    vector <long long int> v;
    
    for(int i=0; i<n; i++){
        long long int t;
        cin>>t;
        v.push_back(t);
    }
    
    int q;
    cin>>q;
    
    for(int i=0; i<q; i++){
        long long int x;
        cin>>x;
        
        vector<long long int>::iterator lower, upper;
        lower = lower_bound(v.begin(), v.end(), x);
        
        if(binary_search(v.begin(), v.end(), x)){
            cout<<"Yes "<<lower - v.begin() +1 << endl;
        }
        else{
            cout<<"No "<<lower - v.begin() +1 << endl;
        }
    }
    
    return 0;
}
