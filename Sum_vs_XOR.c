#include <stdio.h>
#include <math.h>

long long int count_zero(long long int n){

    long long int count = 0;
    int x;
    while(n!=0){
        x = n%2;
        n = n/2;
        //printf("%d ",x);
        if(x==0){
            count++; 
        }
    }
    return count;
}

int main(){

    
    long long int n;
    scanf("%lld",&n);

    int total_zero = count_zero(n);
    
    long long int ans;
    ans = pow(2,total_zero);

    printf("%lld\n",ans);

    return 0;
}
