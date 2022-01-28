#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){

    int n;
    int m;

    cin>>n>>m;

    int arr[m];

    for(int i=0; i<m; i++){
        cin>>arr[i];
    }

    sort(arr,arr+m);
    

    int start = abs(0-arr[0]);
    int end = abs((n-1)-arr[m-1]);

    int middle = 0;

    for(int i=0; i<m-1; i++){
        int d = abs(arr[i] - arr[i+1]);
        middle = max(middle,d);
    }

    middle = middle/2;


    int ans = max(start,end);
    ans = max(ans,middle);

    cout<<ans<<endl;


    return 0;
}
