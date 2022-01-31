#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++){
        if(s[i]==s[i+1]){
            s.erase(s.begin()+i,s.begin()+(i+2));
            i=-1;
            continue;
        }
    }
    
    if(s.length()==0){
        cout<<"Empty String"<<endl;
    }
    
    else{
        cout<<s<<endl;
    }
    

    return 0;
}
