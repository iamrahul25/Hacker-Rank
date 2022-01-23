#include <stdio.h>
#include <string.h>

int count_a(char str[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(str[i]=='a'){
            count++;
        }
    }
    return count;
}

int main(){

    char str[101];
    long long int n;

    scanf("%s",str);
    scanf("%lld",&n);

    int length = strlen(str);
    int count = count_a(str,length);
    
    long long int ans = ((n/length) * count) + count_a(str,(n%length));
    
    printf("%lld\n",ans);

    return 0;
}
