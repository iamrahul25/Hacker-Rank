#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int q;
    cin>>q;

    while(q--){
        int n;
        long long int k;
        cin>>n>>k;

        long long int A[n];
        long long int B[n];

        for(int i=0; i<n; i++){
            cin>>A[i];
        }

        for(int i=0; i<n; i++){
            cin>>B[i];
        }

        sort(A,A+n);
        sort(B,B+n,greater<int>());
        

        int flag = 1;
        for(int i=0; i<n; i++){
            if(A[i]+B[i]<k){
                flag = 0;
                break;
            }
        }

        if(flag==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }


    return 0;
}
