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

    sort(arr,arr+n);

    int minimum;
    for(int i=0; i<n-1; i++){
        minimum = min(minimum, abs(arr[i]-arr[i+1]));
    }

    for(int i=0; i<n-1; i++){
        if(minimum==abs(arr[i]-arr[i+1])){
            cout<<arr[i]<<" "<<arr[i+1]<<" ";
        }
    }
    cout<<endl;


    return 0;
}
