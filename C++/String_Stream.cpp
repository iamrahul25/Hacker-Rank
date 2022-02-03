#include <sstream>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<int> parseInts(string str){

    int n = 1;
    
    for(int i=0; i<str.length(); i++){
        if(str[i]==','){
            n++;
        }
    }

    stringstream ss(str);
    vector<int> v;

    int no;
    char comma;
    
    for(int i=0; i<n; i++){
        ss>>no;
        ss>>comma;
        v.push_back(no);
    }

    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
