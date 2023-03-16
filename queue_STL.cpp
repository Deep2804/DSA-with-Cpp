#include<iostream>
#include<queue>

using namespace std;
int main() {
    queue<string> q;

    q.push("Deepak");
    q.push("Singh");
    q.push("Rajput");
     cout<<"Size Before Pop "<<q.size()<<endl;
    cout<<"First Element is "<<q.front()<<endl;
    q.pop();
    cout<<"First Element is "<<q.front()<<endl;

    cout<<"Size After Pop "<<q.size()<<endl;

    
    }