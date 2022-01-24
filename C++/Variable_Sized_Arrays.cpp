#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

    vector <vector<int>> vector_2d;

    int n,q;

    cin>>n>>q;

    //Input 2D Array
    for(int i=0; i<n; i++){
        int length;
        cin>>length;

        vector<int> vector_1d;

        for(int j=0; j<length; j++){
            int t;
            cin>>t;
            vector_1d.push_back(t);
        }
        vector_2d.push_back(vector_1d);
    }

    //Query 
    for(int i=0; i<q; i++){
        int x,y;
        cin>>x>>y;
        cout<<vector_2d[x][y]<<endl;
    }
    
    
    return 0;
}
