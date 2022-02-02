#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        if(s.length()%2!=0){
            cout<<"-1"<<endl;
        }

        else{

            int hash1[26] = {0}; //First Half String
            int hash2[26] = {0}; //Second Half String


            for(int i=0; i<s.length()/2; i++){
                hash1[s[i]-'a']++;
            }

            for(int i=s.length()/2; i<s.length(); i++){
                hash2[s[i]-'a']++;
            }

            int common = 0;
            for(int i=0; i<26; i++){
                common = common + min(hash1[i],hash2[i]);
            }

            int ans = (s.length()/2) - common;

            cout<<ans<<endl;

        }
    }

    return 0;
}
