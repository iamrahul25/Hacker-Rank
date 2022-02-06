#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n, amount;
    cin>>n>>amount;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int sum = 0;
    int i=0;
    while(sum<amount){
        sum = sum + arr[i];
        i++;
    }

    cout<<i-1<<endl;



    return 0;
}
