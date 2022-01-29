#include <iostream>
using namespace std;

int main(){

    int t; 
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int n = s.length();

        int sum = 0;

        for(int i=0; i<n/2; i++){
            sum = sum + abs(int(s[i]) - int(s[n-i-1]));
        }
        cout<<sum<<endl;

    }

    return 0;
}
