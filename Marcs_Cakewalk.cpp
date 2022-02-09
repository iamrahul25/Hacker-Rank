#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n; 
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr,arr+n,greater<int>());

    long long int sum = arr[0];
    long long int p = 1;
    for(int i=1; i<n; i++){
        p = p * 2;
        sum = sum + (p*arr[i]);
    }

    cout<<sum<<endl;

    return 0;
}
