#include <stdio.h>
#include <math.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        long long int a,b;
        scanf("%lld %lld",&a,&b);
        
        long long int ans = floor(sqrt(b)) - floor(sqrt(a-1));
               
        printf("%lld\n",ans);
    }

    return 0;
}
