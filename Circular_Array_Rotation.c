#include <stdio.h>

int main(){

    int n, k, q;
    scanf("%d %d %d",&n,&k,&q);

    int arr[n];
    int rotate[n];
    int query[q];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<q; i++){
        scanf("%d",&query[i]);
    }


    for(int i=0; i<n; i++){
        rotate[(i+k)%n] = arr[i];
    }

    for(int i=0; i<q; i++){
        printf("%d\n",rotate[query[i]]);
    }

    return 0;
}
