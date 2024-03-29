#include<bits/stdc++.h>
using namespace std;
#define max 1000000
vector<bool>prime(max,1);
void sieve()
{
    long int i,j,m=sqrt(max+1);
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
    long int n;
    while(scanf("%ld",&n)==1)
    {
        long int i,m,x,flag=0;
        if(n==0)
        {
            break;
        }
        m=n/2+1;
        for(i=1; i<=m; i++)
        {
            if(prime[i])
            {
                x=n-i;
                if(prime[x])
                {
                    flag=1;
                    cout<<n<<" = "<<i<<" + "<<x<<endl;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"Goldbach's conjecture is wrong."<<endl;
        }
    }
}
