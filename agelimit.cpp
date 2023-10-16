/* 
PRN - 22070123092
Exp-16(Part-B)
*/
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"\nEnter age ";
    cin>>a;
    try
    {
      if(a>=18)
    {
        cout<<"Eligible "<<a;
    }
    else
    {
throw a;
    }
}
catch(int e)
{
    cout<<"\nNot Eligible"<<" error";
}
return 0;
}
/*Output
Enter age 17
Not Eligible error
*/
