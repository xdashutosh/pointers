#include<bits/stdc++.h>
using namespace std;
int main()
{
//assign value to the variable using pointer

    int a; //we will provide address of a to ptr
    int* ptr=&a; //ptr holding address of a 
    *ptr=4; //dereferncing ptr and assigned a value to it
cout<<"value of a assign using ptr dereferncing a = "<<a<<endl;


    

return 0;
}