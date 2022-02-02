#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    char str[n];

    for(int i=0; i<n; i++){
        cin>>str[i];
    }

    int main[4] = {0,0,0,0};

    for(int i=0; i<n; i++){
        if(str[i]>='A' and str[i]<='Z'){
            main[0]++;
        }
        else if(str[i]>='a' and str[i]<='z'){
            main[1]++;
        }
        else if(str[i]>='0' and str[i]<='9'){
            main[2]++;
        }
        else{
            main[3]++;
        }
    }

    int count = 0;
    for(int i=0; i<4; i++){
        if(main[i]==0){
            count++;
        }
    }

    if(n+count>=6){
        cout<<count<<endl;
    }

    else{
        cout<<(6-n)<<endl;
    }


    return 0;
}
