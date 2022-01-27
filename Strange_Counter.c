#include <stdio.h>
#include <math.h>

int main(){

    long long int t;
    scanf("%lld",&t);

    long long int a = 1;
    long long int b = 3;
    long long int sum = 0;

    int i = 0;
    while(sum<=t){
        i++;
        sum = a+b;
        a = sum;
        b = pow(2,i)*3;
        //printf("%d : %lld - b: %lld\n",i,sum,b);
    }

    //nth Table no. = i
    //printf("%d ",i);

    //Answer
    printf("%lld\n",sum-t);

    return 0;
}
