#include <iostream>
#include <cmath>
using namespace std;

int main(){

    string s;
    cin>>s;

    int n = s.length();

    int a = floor(sqrt(n));
    int b = ceil(sqrt(n));


    for(int i=0; i<b; i++){
        for(int j=0; j<n-i; j=j+b){
            cout<<s[j+i];
        }
        if(i!=b-1){
            cout<<" ";
        }
    }


    return 0;
}
