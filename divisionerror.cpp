/* 
PRN - 22070123092
Exp-16(Part-A)
Division Error
*/

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\nEnter 2 numbers:";
    cin>>a>>b;
    try
    {
        if(b!=0)
        {
            c=a/b;
            cout<<"\nDivision="<<c;
        }
        else
        {
            throw b;
        }
    }
    catch(int e)
    {
        cout<<"\nDivide by "<<e<<" error";
    }
    return 0;
}
/*Output
Enter 2 numbers:2/0
Divide by 0 error
*/
