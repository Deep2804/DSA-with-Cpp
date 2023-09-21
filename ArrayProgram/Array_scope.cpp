#include<iostream>
using namespace std;
void update(int arr[],int n) {
    cout<<endl<<"Inside the Function"<<endl;


    arr[0]=120;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;


    cout<<endl<<"Going Back To Main Function"<<endl;
}

int main() {
    int arr[3] ={1,2,3};
    update(arr,3);

    cout<<endl<<"Printing the Main Function"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

    return 0;
}