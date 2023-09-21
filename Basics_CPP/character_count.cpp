#include <iostream>
using namespace std;
int main()
{
char line[35];
int vowels;
vowels = 0;
cout<< “Enter a line of string: ”;
cin.getline(line, 35);
for(int i = 0; line[i]!=‘\0’; ++i)
{
if(line[i]==‘a’ || line[i]==‘e’ || line[i]==‘i’ ||
line[i]==‘o’ || line[i]==‘u’ || line[i]==‘A’ ||
line[i]==‘E’ || line[i]==‘I’ || line[i]==‘O’ ||
line[i]==‘U’)
{
++vowels;
}
}
cout<< “Vowels: ” <<vowels<<endl;
return 0;
}
