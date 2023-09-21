#include<iostream>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int arr[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    for(int i=n-1;i>=0;i--) {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
