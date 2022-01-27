#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    int odd = 0;
    int even = 0;

    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    if(odd%2!=0){
        cout<<"NO"<<endl;
    }

    else if(even==n){
        cout<<0<<endl;
    }

    else{

        int bread = 0;
        for(int i=0; i<n-1; i++){
            if(arr[i]%2!=0){
                arr[i]++;
                arr[i+1]++;
                bread = bread + 2;
            }
        }

        cout<<bread<<endl;
    }

    
    return 0;
}
