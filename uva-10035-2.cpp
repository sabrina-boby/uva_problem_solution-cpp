#include <algorithm>
#include<iostream>
using namespace std;

int main()
{
    long long int x,y;
    while(scanf("%lld %lld",&x,&y))
    {
        long long int m,n,i,t=0,v=0,k;

        if(!x && !y)
        {
            break;
        }

        while(x || y)
        {
            n=x%10;
            x=x/10;

            m=y%10;
            y=y/10;

            k=n+m+t;
            if(k>=10)
            {
                t=1;
                v++;
            }
            else
            {
                t=0;
            }
        }
        if(v==0)
        {
            cout<<"No carry operation."<<endl;
        }
        else if(v==1)
        {
            cout<<v<<" carry operation."<<endl;
        }
        else
        {
            cout<<v<<" carry operations."<<endl;
        }
    }
}

