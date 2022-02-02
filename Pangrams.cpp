#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);

    int hash[26] = {0};

    int x;
    for(int i=0; i<s.length(); i++){

        if(s[i]>='A' and s[i]<='Z'){
            x = s[i] - 'A';
            hash[x]++;
        }

        else if(s[i]>='a' and s[i]<='z'){
            x = s[i] - 'a';
            hash[x]++;
        }
        
    }

    int flag = 1;
    for(int i=0; i<26; i++){
        if(hash[i]==0){
            flag = 0;
            break;
        }
    }

    if(flag==1){
        cout<<"pangram"<<endl;
    }
    else{
        cout<<"not pangram"<<endl;
    }
}
