#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    char s[n];
    for(int i=0; i<n; i++){
        cin>>s[i];
    }

    int k;
    cin>>k;

    k = k%26;
    
    for(int i=0; i<n; i++){
        if(s[i]>='a' and s[i]<='z'){
            if((s[i]+k) <='z'){
                printf("%c",s[i]+k);
            }

            else{
                printf("%c",'a'+((s[i]+k-1)%'z'));
            }
        }

        else if(s[i]>='A' and s[i]<='Z'){
            if((s[i]+k) <='Z'){
                printf("%c",s[i]+k);
            }

            else{
                printf("%c",'A'+((s[i]+k-1)%'Z'));
            }
        }

        else{
            printf("%c",s[i]);
        }
    }

    return 0;
}
