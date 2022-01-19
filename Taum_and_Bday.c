#include <stdio.h>

long long int min_of_3(long long int a, long long int b, long long c){
    if(a<=b && a<=c){
        return a;
    }
    
    else if(b<=a && b<=c){
        return b;
    }

    else{
        return c;
    }
}

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        long long int b,c,bc,wc,z;
        long long int cost = 0;

        scanf("%lld %lld %lld %lld %lld",&b,&c,&bc,&wc,&z);

        cost = min_of_3((b*bc) + (c*wc), (b*bc) + (c*(z+bc)), (c*wc) + (b*(z+wc)));

        printf("%lld\n",cost);
    }

    return 0;
}
