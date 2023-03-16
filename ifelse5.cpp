#include<iostream>
using namespace std;
int main() {
    char ch = '2';
    if(ch>='a' and ch<='z'){
        cout<<ch<<" is Lowercase Alphabet";
    }
    else if(ch>='A' and ch<='Z'){
        cout<<ch<<" is Uppercase Alphabet";
    }
    else {
        cout<<ch<<" is Numeric";
    }
}