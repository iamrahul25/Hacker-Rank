#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    char str[n];

    for(int i=0; i<n; i++){
        cin>>str[i];
    }

    int count = 0;
    for(int i=0; i<n-2; i++){
        if(str[i]=='0' && str[i+1]=='1' && str[i+2]=='0'){
            str[i+2] = '1';
            count++;
        }
    }

    cout<<count<<endl;
}
