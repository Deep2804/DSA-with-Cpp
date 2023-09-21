#include<iostream>
using namespace std;

void reachHome(int src,int dest){

    cout<<"source "  <<  src  <<  "  destination "  <<  dest  <<endl;
    //base case
    if(src==dest){
        cout<<"Pahuch Gya"<<endl;
        return;
    }
    //processing-ek step aage budjao
    src++;
    //recursive call
    reachHome(src,dest);
}
int main() {
    int dest = 10;
    int src = 1;


    reachHome(src,dest);


    return 0;
}