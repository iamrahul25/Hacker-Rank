#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        int hash[26] = {0};

        int cost = 0;
        for(int i=0; i<s.length(); i++){
            if(hash[s[i]-'a']==0){
                cost++;
                hash[s[i]-'a']++;
            }
        }

        cout<<cost<<endl;

    }

    return 0;
}
