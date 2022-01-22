#include <stdio.h>
#include <string.h>

int main(){

    char t[10];
    scanf("%s",t);

    int hh = (10*(((int)t[0])-48)) + (((int)t[1])-48);
    
    if(t[8]=='P'){
        if(hh<12){
        hh = hh + 12;
        }
    }
    else{
        if(hh>=12){
        hh = (hh+12) % 24;
        }
    }
    
    t[0] = (char)((hh/10)+48);
    t[1] = (char)((hh%10)+48);

    for(int i=0; i<strlen(t)-2; i++){
        printf("%c",t[i]);
    }
    printf("\n");

    return 0;
}
