#include <iostream>
using namespace std;

bool check_palindrome(string s){
    int n = s.length();

    int flag = 1;
    for(int i=0; i<n/2; i++){
        if(s[i]!=s[n-1-i]){
            flag = 0;
            break;
        }
    }

    return flag;
}

int main(){

    int t;
    cin>>t;

    while(t--){

        string s;
        cin>>s;

        if(check_palindrome(s)){
            cout<<"-1"<<endl;
        }

        else{

            int index = -1;
            int n = s.length();
            for(int i=0; i<n/2; i++){
                if(s[i]!=s[n-1-i]){
                    index = i;
                    break;
                }
            }

            string s1, s2;
            s1 = s;
            s2 = s;

            s1.erase(s1.begin()+index);
            s2.erase(s2.begin()+(n-1-index));
            

            if(check_palindrome(s1)){
                cout<<index<<endl;
            }
            else{
                cout<<(n-1-index)<<endl;
            }
        }
    }

    return 0; 
}
