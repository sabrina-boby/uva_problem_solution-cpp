#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int H,M,h,m,x,y,z;
        cin>>H>>M>>h>>m;
        if(H==0 && M==0 && h==0 && m==0)
        {
            break;
        }
        if(H==h && M==m)
        {
            cout<<0<<endl;
        }
        else if(H==h && M<m)
        {
            cout<<m-M<<endl;
        }
        else if(H<h)
        {
            x=(H*60)+M;
            y=(h*60)+m;
            cout<<y-x<<endl;
        }
        else
        {
            x=(H*60)+M;
            y=(h*60)+m;
            z=1440-x;
            cout<<y+z<<endl;
        }
    }
}
