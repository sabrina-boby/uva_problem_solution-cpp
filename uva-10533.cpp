#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
#define max 1000001
vector<bool>prime(max,1);
vector<int>prime2(max,0);
void sieve()
{
    int i,j,s=sqrt(max+1);
    prime[0]=prime[1]=0;

    for(i=2; i<=s; i++)
    {
        if(prime[i])
        {
            for(j=i*i; j<=max; j+=i)
            {
                prime[j]=false;
            }
        }
    }
    int n,sum,k,count=0;
    for(i=0; i<=max; i++)
    {
        sum=0;
        if(prime[i])
        {
            n=i;
            while(n>0)
            {
                k=n%10;
                sum=sum+k;
                n=n/10;
            }
        }
        if(prime[sum])
        {
            prime2[i]=++count;
        }
        else
        {
            prime2[i]=count;
        }
    }
}
int main()
{
    sieve();
    int t;

    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);

        printf("%d\n",prime2[y]-prime2[x-1]);
    }
}






















