#include <iostream>
using namespace std;

int main(){

    string s;
    cin>>s;

    int hash[26] = {0};

    for(int i=0; i<s.length(); i++){
        hash[s[i]-'a']++;
    }


    int pair = 0;
    int single = 0;

    for(int i=0; i<26; i++){
        if(hash[i]%2==0){
            pair++;
        }
        else{
            single++;
        }
    }


    if(s.length()%2==0){
        if(single==0){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }
    }

    else{

        if(single==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
