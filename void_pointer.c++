#include<bits/stdc++.h>
using namespace std;

//lets suppose we have to make a fun to print no using address so if we need to print int,char,float etc we have to make differnt fun for each datatype...
//to solve this we will make a void pointer fun.. 
void print(void* ptr,char type)
{
switch (type)
{
case 'i':
 cout<<*((int*)ptr)<<endl;//casting void pointer into int and then drefrencing it.

    break;

case 'c':
cout<<*((char*)ptr)<<endl;
    break;

case 'f':
cout<<*((float*)ptr)<<endl;
break;    
}
}
int main()
{
    int v=5;
    print(&v,'i');

    char b='a';
    print(&b,'c');

    float z=1.23;
    print(&z,'f');
return 0;
}