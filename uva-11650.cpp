#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m,hh,mm;
        char x;
        cin>>h>>x>>m;
        if((h==06 || h==12) && m==0)
        {
            hh=h;
        }
        else if(h==12 && 0<m)
        {
            hh=h-1;
        }
        else if(m==0)
        {
            hh=12-h;
        }
        else if(0<m)
        {
            hh=12-h;
            hh=hh-1;
            if(hh==0)
            {
                hh=12;
            }
        }
        ///
        if(hh<10)
        {
            cout<<0<<hh<<":";
        }
        else
        {
            cout<<hh<<":";
        }
        ///
        if(m==00 || m==30)
        {
            mm=m;
        }
        else
        {
            mm=60-m;
        }
        ///
        if(mm<10)
        {
            cout<<0<<mm<<endl;
        }
        else
        {
            cout<<mm<<endl;
        }
        ///
    }
}
