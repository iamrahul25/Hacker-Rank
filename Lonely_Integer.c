#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int arr[n];
    
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int xor = 0;
    for(int i=0; i<n; i++){
        xor = xor^arr[i];
    }

    printf("%d\n",xor);

    return 0;
}
