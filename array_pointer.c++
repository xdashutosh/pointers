#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rollno[]={23,43,12,66,68};
    cout<<rollno<<endl;
    int* ptr=rollno;
    cout<<*ptr<<endl<<endl;
    for (int i = 0; i < 5; i++)
    {
        int * arraypoint=&rollno[i];
        cout<<*arraypoint<<endl;
    }
    cout<<endl;
 cout<<*(rollno+2)<<endl;   
 cout<<&rollno[2]<<endl;
 
 for (int i = 0; i < 5; i++)
 {
 cout<<*(rollno+i)<<endl;   
     
 }
 

return 0;
}