#include<iostream>
#include <algorithm>
#include<cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int a[1000]= {0};
int sieve()
{
    int r,i,j;
    r=sqrt(1000);
    for(i=2; i<=r; i++)
    {
        if(a[i]!=1)
        {
            for(j=i; i*j<1000; j++)
            {
                a[i*j]=1;
            }
        }
    }
}
int main()
{
    fast
    sieve();
    int n,p;
    while(scanf("%d",&n))
    {
        if(n==0)
        {
            break;
        }
        else if(n>=991)
        {
            cout<<0<<endl;
        }
        else
        {
            for(p=n+1; p<1000; p++)
            {
                int k,x,count=0,b[10],i,y,z,count2=0;
                if(a[p]==0)
                {
                    k=p;
                    while(k!=0)
                    {
                        x=k%10;
                        k=k/10;
                        b[count++]=x;
                    }
                    sort (b,b+count);

                    do
                    {
                        int t=0,hishab=0;
                        for(i=count-1; i>=0; i--)
                        {
                            y=b[i];
                            z=pow(10,hishab++);
                            t=t+(y*z);
                        }

                        if(a[t]==1)
                        {
                            count2=1;
                            break;
                        }
                    }
                    while(next_permutation(b,b+count));
                    if(count2==0)
                    {
                        cout<<p<<endl;
                        break;
                    }
                }
            }
        }
    }

}
