#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin>>n;

    int first;
    cin>>first;

    vector <int> v1;
    vector <int> v2;

    for(int i=1; i<n; i++){
        int t; 
        cin>>t;

        if(t<first){
            v1.push_back(t);
        }
        else{
            v2.push_back(t);
        }
    }

    //Printing Lesser elements
    for(auto x: v1){
        cout<<x<<" ";
    }

    //Printing Equal element
    cout<<first<<" ";

    //Printing Greater elements
    for(auto x: v2){
        cout<<x<<" ";
    }

    return 0;
}
