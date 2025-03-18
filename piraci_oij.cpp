/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;
int dg, lp;
int main()
{
    string n;
    cin>>n;
    int d=n.size();
    for (int i = 0; i < d; i++)
    {
        if(n[i]=='G')
        {
            dg--;
        }
        else if(n[i]=='D')
        {
            dg++;
        }
        
        if(n[i]=='P')
        {
            lp--;
        }
        else if(n[i]=='L')
        {
            lp++;
        }
        
    }
    
    if(dg>0)
    {
        for (int i = 0; i < dg; i++)
        {
            cout<<"G";
        }
    }
    
    else
    {   dg=dg*(-1);
        for (int i = 0; i < dg; i++)
        {
            cout<<"D";
        }
    }
    
    if(lp>0)
    {
        for (int i = 0; i < lp; i++)
        {
            cout<<"P";
        }
    }
    
    else
    {   lp=lp*(-1);
        for (int i = 0; i < lp; i++)
        {
            cout<<"L";
        }
    }
    
    

    return 0;
}
