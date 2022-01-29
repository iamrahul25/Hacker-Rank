#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string s1, string s2){
    if(s1.size() == s2.size()){
        return s1 < s2;
    }
    else{
        return s1.size() < s2.size();
    }
}

int main(){

    vector <string> v;

    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }

    sort(v.begin(),v.end(),compare);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<endl;
    }

    return 0;
}
