#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    
    cin>>s1>>s2;
    
    int l1 = s1.length();
    int l2 = s2.length();
    
    string a,b;
    
    a.append(s1);
    b.append(s2);
    
    swap(a[0],b[0]);
    
    cout<<l1<<" "<<l2<<endl;
    cout<<s1+s2<<endl;
    cout<<a<<" "<<b<<endl;
  
    return 0;
}
