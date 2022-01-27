#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);
    
    while(t--){

        int n,a,b;
        scanf("%d %d %d",&n,&a,&b);

        if(a>b){
            int temp = a;
            a = b;
            b = temp;
        }

        if(a==b){
            printf("%d\n",(n*a)-a);
        }
        else{
            for(int i=0; i<n; i++){
                printf("%d ",(a*(n-1-i))+(b*i));
            }
            printf("\n");
        }
        
    }
    
    return 0;
}
