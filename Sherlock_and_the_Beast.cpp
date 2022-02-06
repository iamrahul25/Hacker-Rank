#include <iostream>
using namespace std;

void print_char(int n, char c){
    for(int i=0; i<n; i++){
        cout<<c;
    }
}

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        if(n<3){
            cout<<"-1"<<endl;
        }


        else{

            int three = -1;
            for(int i=0; i<=n/5; i++){
                if((n-(5*i))%3==0){
                    three = i*5;
                    break;
                }
            }

            if(three==-1){
                cout<<"-1"<<endl;
            }

            else{
                print_char(n-three,'5');
                print_char(three,'3');
                cout<<endl;
            }
        }
    }

    return 0;
}
