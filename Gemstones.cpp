#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n;
    cin>>n;

    vector <string> v;

    for(int i=0; i<n; i++){
        string temp;
        cin>>temp;
        v.push_back(temp);
    }

    int main_hash[26] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

    for(int i=0; i<n; i++){
        int hash[26] = {0};

        for(int j=0; j<v[i].length(); j++){

            int x = int((v[i][j]) - 'a');
            hash[x] = 1;
        }

        for(int k=0; k<26; k++){
            main_hash[k] = main_hash[k] & hash[k];
        }
    }


    int sum = 0;
    for(int a = 0; a<26; a++){
        sum = sum + main_hash[a];
    }

    cout<<sum<<endl;

    return 0;
}
