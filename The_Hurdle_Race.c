#include <stdio.h>

int main(){

    int n, k;
    scanf("%d %d",&n,&k);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }

    int ans;
    if((max-k)<0){
        ans = 0;
    }
    else{
        ans = max - k;
    }

    printf("%d\n",ans);

    return 0;
}
