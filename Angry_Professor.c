#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n, m;
        scanf("%d %d",&n,&m);

        int arr[n];

        int ontime = 0;
        int late = 0;

        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
            if(arr[i]<=0){
                ontime++;
            }
            else{
                late++;
            }
        }

        if(ontime>=m){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }

    }
    return 0;
}
