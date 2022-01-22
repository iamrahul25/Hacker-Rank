#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);

        int number = n;
        int digit;
        int count = 0;

        while(n!=0){
            digit = n%10;

            if(digit!=0){
                if(number%digit==0){
                    count++;
                }
            }
            
            n = n/10;
        }
        
        printf("%d\n",count);

    }

    return 0; 
}
