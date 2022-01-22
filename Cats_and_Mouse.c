#include <stdio.h>
#include <math.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int c1, c2, m;
        scanf("%d %d %d",&c1,&c2,&m);

        if(abs(c1-m)==abs(c2-m)){
            printf("Mouse C\n");
        }
        else if(abs(c1-m)<abs(c2-m)){
            printf("Cat A\n");
        }
        else{
            printf("Cat B\n");
        }
    }

    return 0;
}
