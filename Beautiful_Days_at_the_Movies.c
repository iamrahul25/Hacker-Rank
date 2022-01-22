#include <stdio.h>
#include <math.h>

int reverse_no(int n){
    
    int reverse = 0;

    while(n!=0){
        reverse = (reverse*10) + (n%10);
        n = n/10;
    }

    return reverse;
}

int main(){

    int n, m, k;
    scanf("%d %d %d",&n,&m,&k);

    int number, reverse;

    int count = 0;
    for(int i = n; i<=m; i++){
        number = i;
        reverse = reverse_no(number);

        if(((abs(number - reverse))%k)==0){
            count++;
        }

    }

    printf("%d\n",count);
}
