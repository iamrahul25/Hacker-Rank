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

    int box = 1;
    int min = arr[0];
    for(int i=0; i<n; i++){
        if((arr[i]-min)<=4){
            continue;
        }
        else{
            box++;
            min = arr[i];
        }
    }

    cout<<box<<endl;


    return 0;
}
