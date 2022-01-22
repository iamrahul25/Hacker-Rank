#include <stdio.h>
 
int main(){

    int p1, p2, j1, j2;
    scanf("%d %d %d %d",&p1,&j1,&p2,&j2);

    int flag = 0;

    while(1){
        if((p1>100000000) || (p2>100000000)){
            break;
        }

        if(p1==p2){
            flag = 1;
            break;
        }

        p1 = p1 + j1;
        p2 = p2 + j2;

    }

    flag ? printf("YES\n") : printf("NO\n");

    return 0;
}
