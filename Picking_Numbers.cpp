#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int maximum = 0;

    for(int i=0; i<n; i++){
        int c1 = 0;
        int c2 = 0;
        for(int j=i; j<n; j++){
            if((arr[i]==arr[j]) || (arr[i]==arr[j]+1)){
                c1++;
            }
            if((arr[i]==arr[j]) || (arr[i]==arr[j]-1)){
                c2++;
            }

        }
        int cmax = max(c1,c2);
        maximum = max(maximum,cmax);
    }

    cout<<maximum<<endl;

    return 0;
}
