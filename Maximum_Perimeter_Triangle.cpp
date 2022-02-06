#include <iostream>
#include <algorithm>
using namespace std;


int main(){


    int n;
    cin>>n;

    long long int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    long long int x,y,z;
    long long int maximum = -1;
    
    for(int i=0; i<n-2; i++){
        long long int a = arr[i];
        long long int b = arr[i+1];
        long long int c = arr[i+2];

        if(((a+b)>c) and ((b+c)>a) and ((a+c)>b)){
            if((a+b+c)>maximum){
                x = a;
                y = b;
                z = c;
            }
            maximum = max(maximum, a+b+c);
        }
    }

    if(maximum==-1){
        cout<<maximum<<endl;
    }
    else{
        cout<<x<<" "<<y<<" "<<z<<endl;
    }


    return 0;
}
