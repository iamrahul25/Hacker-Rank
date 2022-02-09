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

    int mini = abs(arr[0] - arr[1]);
    for(int i=0; i<n-1; i++){
        mini = min(mini, abs(arr[i]-arr[i+1]));
    }

    cout<<mini<<endl;

    return 0;
}
