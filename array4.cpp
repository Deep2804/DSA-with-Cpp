#include<iostream>
using namespace std;
int sumOfMaxMin(int arr[], int n){
	int min = arr[0];
	int max = arr[0];
	for(int i =0;i<n;i++){
		if(arr[i]<min) min = arr[i];
		if(arr[i]>max) max = arr[i];
 	}
	 return min+max;
}
int main() {
    int arr[] ={1,2,3,5,6,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = sumOfMaxMin(arr,n);
    cout<<"sum is : "<<sum<<endl;
}