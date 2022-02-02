#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        string s2 = s;

        reverse(s2.begin(), s2.end());

        // cout<<s<<" "<<s2<<endl;

        int flag = 1;
        for(int i=0; i<s.length()-1; i++){
            if(abs(s[i] - s[i+1])!=abs(s2[i] - s2[i+1])){
                flag = 0;
                break;
            }
        }

        if(flag==1){
            cout<<"Funny"<<endl;
        }
        else{
            cout<<"Not Funny"<<endl;
        }

    }

    return 0;
}

