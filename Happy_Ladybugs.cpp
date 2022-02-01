#include <bits/stdc++.h> 
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;
        
        int underscore = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='_'){
                underscore++;
            }
        }

        if(underscore>=1){
            sort(s.begin(), s.end());
        }

        int flag = 1;
        for(int i=0; i<s.length()-underscore; i++){

            if(s[i]==s[i+1] || s[i]==s[i-1]){
                continue;
            }

            else{
                flag = 0;
                break;
            }
        }

        if(underscore==s.length()){
            cout<<"YES"<<endl;
        }

        else if(flag==1){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
