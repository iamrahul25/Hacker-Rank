#include <stdio.h>

int main(){

    int a,d,min,amount;
    scanf("%d %d %d %d",&a,&d,&min,&amount);

    int c = 0;
    while(amount>=0){
        amount = (amount) - a;
        c++;

        if((a-d)<min){
            a = min;
        }
        else{
            a = a - d; 
        }
    }

    printf("%d\n",c-1);

    return 0;
}
