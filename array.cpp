#include<iostream>
using namespace std;
void printArray() {
}
int main() {
    int number[15];
    cout<<"Value at 14 index "<<number[14]<<endl;
    //cout<<"Value at 20 index "<<number[20]<<endl;
    int second[3]={5,7,11};
    cout<<"value at 2 index "<<second[2]<<endl;
    int third[15]={2,7};
    int n=3;
    cout<<"printing the array"<<endl;
    for(int i=0;i<n;i++) {
        cout<<third[i]<<" ";
    }

    int fourth[10]={0};
    n=10;
    cout<<"printing the array"<<endl;
    for(int i=0;i<n;i++) {
        cout<<fourth[i]<<" ";
    }


    int fifth[10]={1};
    n=10;
    cout<<"printing the array"<<endl;
    for(int i=0;i<n;i++) {
        cout<<fifth[i]<<" ";
    }

    cout<<endl<<"Everything is fine"<<endl<<endl;

    return 0;
}