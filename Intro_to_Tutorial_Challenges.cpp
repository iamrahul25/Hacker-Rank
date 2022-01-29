#include <iostream>
using namespace std;

int main(){

    int x;
    int n;

    cin>>x>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int index;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            index = i;
            break;
        }
    }

    cout<<index<<endl;

    return 0;
}
