#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector<pair<int,int>> v;

    int a,b;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        v.push_back(make_pair(a+b,i+1));
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++){
        cout<<v[i].second<<" ";
    }

    cout<<endl;
    
    return 0;
}
