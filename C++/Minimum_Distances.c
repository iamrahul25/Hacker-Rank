#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int min = 999999;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j] && (min>(j-i))){
                min = (j-i);
            }
        }
    }

    if(min == 999999){
        printf("-1\n");
    }
    else{
        printf("%d\n",min);
    }

    return 0;
}
