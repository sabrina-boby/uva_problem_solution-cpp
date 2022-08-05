#include<bits/stdc++.h>
using namespace std;
#define max 20000005
vector<bool>prime(max,1);
vector<long int>prime2;
vector<long int>prime3;
void sieve()
{
    long long int i,j,count=1,l;
    prime[0]=prime[1]=false;
    for(i=2; i<=max; i++)
    {
        if(prime[i])
        {
            for(j=i*2; j<=max; j+=i)
            {
                prime[j]=0;
            }
        }
    }
    for(i=2; i<=max; i++)
    {
        if(prime[i])
        {
            prime2.push_back(i);
            prime3.push_back(0);
        }
    }
    l=prime3.size();
    for(i=0; i<=l; i++)
     {
         if(prime2[i]+2==prime2[i+1])
         {
             prime3[i]=count;
             count++;
         }
     }
}
int main()
{
    sieve();
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        long long int i;
        for(i=0; i<=max; i++)
        {
            if(prime3[i]==n)
            {
                cout<<"("<<prime2[i]<<", "<<prime2[i+1]<<")"<<endl;
                break;
            }
        }
    }
}





















