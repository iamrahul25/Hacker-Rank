#include <stdio.h>
#include <string.h>

int main(){

    int arr[26];

    for(int i=0; i<26; i++){
        scanf("%d",&arr[i]);
    }

    char str[10000];
    scanf("%s",str);

    int max = 0;
    for(int i=0; i<strlen(str); i++){
        int x = str[i];
        if(max < arr[(x-97)]){
            max = arr[(x-97)];
        }
    }

    printf("%d\n",max*strlen(str));

    return 0;       
}
