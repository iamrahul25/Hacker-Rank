#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        unsigned int n;
        scanf("%u",&n);

        unsigned int m;
        m = ~n;

        printf("%u\n",m); 
    }
    

    return 0;
}
