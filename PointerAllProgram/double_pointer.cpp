#include<iostream>
using namespace std;

void update(int **p2) {
    //p2 = p2 + 1;
    //kuch change hoga- NO
    //*p2 = *p2+1;
    //kuch change hoga- YES

    //**p2 = **p2+1;
}

int main() {
   /* int i = 5;
    int *p = &i;
    int **p2 = &p;


    
    cout<<endl<<endl<<"Sab sahi chal rha hai "<<endl;

    cout<<"Printing p"<<p<<endl;
    cout<<"address of p"<<&p<<endl;


    cout<<*p2<<endl;
    

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
    


    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<&p<<endl;
    cout<<p2<<endl;
    
    
   cout<<endl<<endl;
   cout<<"Before "<<i<<endl;
   cout<<"Before "<<p<<endl;
   cout<<"Before "<<p2<<endl;
   update(p2);
   cout<<"After "<<i<<endl;
   cout<<"After "<<p<<endl;
   cout<<"After "<<p2<<endl;
   cout<<endl<<endl;
   
  int first = 110;
  int *p = &first;
  int **q = &p;
  int second = (**q)++ +9;
  cout<<first<<" "<<second<<endl;
  

 int first = 110;
 int *p = &first;
 int **q = &p;
 int second = ++(**q);
 int *r = *q;
 ++(*r);
 cout<<first<<" "<<second<<endl;
 */
int first = 100;
int *p = &first;
int **q = &p;
int second = ++(**q);
int *r = *q;
++(*r);
cout<<first<<" "<<second<<endl;

   
    return 0;
}