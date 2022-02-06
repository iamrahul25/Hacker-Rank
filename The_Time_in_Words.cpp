#include <iostream>
using namespace std;

int main(){


    int h,m;
    cin>>h>>m;

    string arr[29] = {"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"};

    string t = "";
    if(m==0){
        t = t + arr[h-1] + " o' clock";
    }

    else if(m==15){
        t = t + "quarter past " + arr[h-1];
    }

    else if(m==30){
        t = t + "half past " + arr[h-1];
    }

    else if(m==45){
        t = t + "quarter to " + arr[h];
    }


    else if(m>=1 && m<=29){
        if(m==1){
            t = t + arr[m-1]  + " minute past " + arr[h-1];
        }
        else{
            t = t + arr[m-1]  + " minutes past " + arr[h-1]; 
        }
    }

    else if(m>=31 && m<=59){
        t = t + arr[(60-m)-1] +" minutes to " +arr[h];  
    }

    cout<<t<<endl;
    return 0;
}
