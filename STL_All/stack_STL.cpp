#include<iostream>
#include<stack>

using namespace std;
int main() {
    stack<string> s;

    s.push("Deepak");
    s.push("Singh");
    s.push("rajput");

    cout<<"Top Element->"<<s.top()<<endl;

    s.pop();
    cout<<"Top Element->"<<s.top()<<endl;

    cout<<"size of stack "<<s.size()<<endl;

    cout<<"Empty or not "<<s.empty()<<endl;
}