#include <stdio.h>

int find_max(int arr[], int n){
    int max = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    return max;
}


int main(){

    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int hash[105]={0};

    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    int max = find_max(hash,101);

    printf("%d\n",n-max);

    return 0;
}
