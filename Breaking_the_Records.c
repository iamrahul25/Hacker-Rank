#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    int c1 = 0;
    int c2 = 0;

    for(int i=0; i<n; i++){
        if(max<arr[i]){
            c1++;
            max = arr[i];
        }

        if(min>arr[i]){
            c2++;
            min = arr[i];
        }
    }

    printf("%d %d\n",c1,c2);

    return 0;
}
