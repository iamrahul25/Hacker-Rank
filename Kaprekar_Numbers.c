#include <stdio.h>
#include <math.h>

int count_digits(int n){
    int d = 0;
    while(n!=0){
        n=n/10;
        d++;
    }

    return d;
}

int check_kaprekarno(long long int n){
    long long int s = n*n;
    int a, b;
    int d = count_digits(n);

    a = s % ((int)(pow(10,d)));
    b = s / ((int)(pow(10,d)));

    if((a+b)==n){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int n, m;
    scanf("%d %d",&n,&m);

    int c = 0;
    for(int i=n; i<=m; i++){
        if(check_kaprekarno(i)){
            printf("%d ",i);
            c++;
        }
    }

    if(c==0){
        printf("INVALID RANGE\n");
    }

    return 0;
}
