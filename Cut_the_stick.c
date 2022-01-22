#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}


int main(){
    
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    qsort(arr, n, sizeof(int), cmpfunc);

    
    while(arr[n-1]>0){
        
        int min;
        for(int i=0; i<n; i++){
            if(arr[i]>0){
                min = arr[i];
                break;
            }
        }

        int count = 0;
        for(int i=0; i<n; i++){
            if(arr[i]-min >= 0){
                count++;
                arr[i] = arr[i]-min;
            }
            else{
                arr[i] = arr[i]-min;
            }
        }

        printf("%d\n",count);
    }

    return 0;

}
