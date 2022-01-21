#include <stdio.h>

int main(){

    int n,m;
    scanf("%d %d",&n,&m);

    int max = -1;

    for(int i=n; i<=m; i++){
        for(int j=n; j<=m; j++){
            if(max<(i^j)){
                max = (i^j);
            }
        }
    }

    printf("%d\n",max);

    return 0;
}
