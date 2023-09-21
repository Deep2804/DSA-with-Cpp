#include<iostream>
using namespace std;

/*void update(int *p) {
    *p = (*p) *2;
}
int main() {
    int i=10;
    update(&i);
    cout<<i<<endl;
    
   void fun(int arr[]) {
    cout<<arr[0]<<" ";

   }
   int main() {
    int arr[] = {11,12,13,14};
    fun(arr+1);
    cout<<arr[0]<<endl;
    */
   void increment(int **p) {
    ++(**p);

   }
   int main() {
    int num = 110;
    int *ptr = &num;
    increment(&ptr);
    cout<<num<<endl;
   
   



    return 0;

}