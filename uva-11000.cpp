#include<iostream>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==-1)
        {
            break;
        }
        else if(n==0)
        {
            cout<<0<<" "<<1<<endl;
        }
        else
        {
            long long int i,p,q,x,r,s;
            p=0;
            q=1;
            x=1;
            for(i=0; i<n; i++)
            {
                r=p+q;
                s=r+x;
                if(i==(n-1))
                {
                    cout<<x<<" "<<s<<endl;
                }
                p=q;
                q=r;
                x=s;
            }
        }
    }
}
