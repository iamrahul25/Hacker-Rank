#include <stdio.h>
#include <string.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        char str[100000];
        scanf("%s",str);

        char str2[10] = {'h','a','c','k','e','r','r','a','n','k'};
        
        int flag = 0;
        int x = 0;

        for(int i=0; i<strlen(str); i++){

            if(str[i]==str2[x]){
                //printf("%c %c \n",str[i],str2[x]);
                x++;

            }

            if(x==9){
                flag = 1;
                break;
            }
            
        }

        flag ? printf("YES\n") : printf("NO\n");
    }
    
    return 0; 
}
