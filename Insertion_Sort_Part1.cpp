#include <iostream>
using namespace std;

void printarr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main(){

    int n;

    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }   

    int last = arr[n-1];

    for(int i=n-1; i>=0; i--){
        if(arr[i]>last){
            arr[i+1] = arr[i];
            printarr(arr,n);
        }
    }

    for(int i=0; i<n; i++){
        if(last<arr[i]){
            arr[i] = last;
            break;
        }
    }

    printarr(arr,n);

    return 0;
}
