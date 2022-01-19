#include <stdio.h>
#include <string.h>

int min(int a, int b){
    
    int min;
    (a<=b) ? (min=a): (min=b);

    return min;
}


int main(){

    char str1[10100];
    char str2[10100];

    scanf("%s",str1);
    scanf("%s",str2);


    int arr1[26]={0};
    int arr2[26]={0};
    int arr3[26]={0};

    int s;

    for(int i=0; i< strlen(str1); i++){
        s = (int)str1[i];
        s = s-97;
        arr1[s]++;
    }

    for(int i=0; i< strlen(str2); i++){
        s = (int)str2[i];
        s = s-97;
        arr2[s]++;
    }
    
    for(int i=0; i<26; i++){
        arr3[i] = min(arr1[i],arr2[i]);
    }

    int sum=0;
    for(int i=0; i<26; i++){
        sum = sum + arr3[i];
    }

    int ans = (strlen(str1) + strlen(str2)) - (2*sum);
    
    printf("%d\n",ans);
    
    return 0;
}
