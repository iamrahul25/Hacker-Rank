#include <bits/stdc++.h>
using namespace std;

int main(){


    int t;
    cin>>t;

    while(t--){
        string s1,s2;
        cin>>s1;
        s2 = s1;
        int flag = 0;

        next_permutation(s2.begin(), s2.end());
        
        if(s1>=s2){
            cout<<"no answer"<<endl;
        }
        else{
            cout<<s2<<endl;
        }
  
    }

    return 0;
}
