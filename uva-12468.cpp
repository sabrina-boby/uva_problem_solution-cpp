#include<iostream>
using namespace std;
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        if(n==-1 && m==-1)
        {
            break;
        }
        int x,y;
        if(n==m)
        {
            cout<<0<<endl;
        }
        else if(n<m)
        {
            x=m-n;
            y=(100-m)+n;
            if(x<y)
            {
                cout<<x<<endl;
            }
            else
            {
                cout<<y<<endl;
            }
        }
        else
        {
            x=n-m;
            y=(100-n)+m;
            if(x<y)
            {
                cout<<x<<endl;
            }
            else
            {
                cout<<y<<endl;
            }
        }
    }
}
