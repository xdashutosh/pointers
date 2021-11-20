#include<bits/stdc++.h>
using namespace std;
int main()
{
int n=5; //varible
cout<<n<<endl;
cout<<"address of n is "<<&n<<endl;
int* ptr=&n;//pointer
cout<<ptr<<endl;//holding address
cout<<*ptr<<endl;//holding value at that address

float b=3;
cout<<b<<endl;
cout<<"address of b is "<<&b<<endl;
float* ptr1=&b;
cout<<ptr1<<endl;

return 0;
}