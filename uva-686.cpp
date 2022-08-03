#include<bits/stdc++.h>
using namespace std;
#define max 32770
vector<bool>prime(max,1);
void sieve()
{
    int i,j,m=sqrt(max+1);
    prime[0]=prime[1]=0;

    for(i=2; i<=m; i++)
    {
        if(prime[i])
        {
            for(j=i*i; j<=max; j+=i)
            {
                prime[j]=false;
            }
        }
    }
}
int main()
{
    sieve();
    int n;
    while(scanf("%d",&n)==1)
    {
        int i,m,x,count=0;
        if(n==0)
        {
            break;
        }
        m=n/2;
        for(i=1; i<=m; i++)
        {
            if(prime[i])
            {
                x=n-i;
                if(prime[x])
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
}

