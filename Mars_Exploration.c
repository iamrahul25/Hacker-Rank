#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    char str[100010];

    scanf("%s",&str);

    int count = 0;
    for(int i=0; i<strlen(str); i=i+3){
        if((str[i]!='S') && (str[i+1]!='O') && (str[i+2]!='S')){
            count++;
        }
    }

    printf("%d\n",count);

    return 0;
}
