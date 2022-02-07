#include <iostream>
using namespace std;

void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++){
        int j = i+1;
        while(j>0){

            if(arr[j]>arr[i]){
                break;
            }

            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }

            j--;
        
        }

        printarr(arr,n);
    }

    return 0;
}
