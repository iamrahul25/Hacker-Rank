#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int hash[101] = {0};

    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }   

    int pair = 0;
    for(int i=0; i<101; i++){
        pair = pair + (hash[i]/2);
    }

    printf("%d\n",pair);


    return 0;
}
