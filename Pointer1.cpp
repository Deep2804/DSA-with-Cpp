#include<iostream>
using namespace std;
int main() {
    int num = 5;
    cout<<num<<endl;
  //address of operator - &
cout<<"Address of Num is "<<&num<<endl;

int *ptr = &num;
cout<<"Value is:"<<*ptr<<endl;
cout<<"Address is:"<<ptr<<endl;
cout<<"Value is:"<<&ptr<<endl;

double d =4.3;
double *p2 = &d;
cout<<"Adress is:"<<p2<<endl;
cout<<"Value is: "<<*p2<<endl;


cout<<"Size of integer is:"<<sizeof(num)<<endl;
cout<<"Size of pointer is:"<<sizeof(ptr)<<endl;
cout<<"Size of pointer is:"<<sizeof(p2)<<endl;
return 0;
}
