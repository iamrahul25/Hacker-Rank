#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int hash[100] = {0};

    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    for(int i=0; i<100; i++){
        cout<<hash[i]<<" ";
    }

    cout<<endl;

    return 0;
}
