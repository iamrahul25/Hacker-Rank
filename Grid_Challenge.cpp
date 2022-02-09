#include <iostream>
#include <algorithm>
using namespace std;

int main(){


    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        int m = arr[0].length();

        int flag1 = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m-1; j++){
                sort(arr[i].begin(), arr[i].end());
                if(arr[i][j]>arr[i][j+1]){
                    flag1 = 0; 
                    break;
                }
            }
        }

        int flag2 = 1;
        for(int i=0; i<n-1; i++){
            for(int j=0; j<m; j++){
                if(arr[i][j]>arr[i+1][j]){
                    flag2=0;
                    break;
                }
            }
        }

        if(flag1==1 && flag2==1){
            cout<<"YES"<<endl;
        }

        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
