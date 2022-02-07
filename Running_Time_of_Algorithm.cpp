#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int count = 0;
    
    for(int i=0; i<n-1; i++){
        int j = i+1;
        while(j>0){

            if(arr[j]>arr[i]){
                break;
            }

            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                count++;
            }

            j--;
        
        }
    }

    cout<<count<<endl;

    return 0;
}
