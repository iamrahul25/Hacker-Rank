#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    int y1,y2,m1,m2,d1,d2;

    scanf("%d %d %d %d %d %d",&d1,&m1,&y1,&d2,&m2,&y2);

    int hackos;
    if((abs(y1-y2))>=1){
        hackos = 10000*(y1-y2);
    }

    else if((abs(m1-m2))>=1){
        hackos = 500*(m1-m2);
    }

    else{
        hackos = 15 * (d1-d2);
    }

    if(hackos<0){
        printf("%d\n",0);
    }
    else{
        printf("%d\n",hackos);
    }

    return 0;
}
