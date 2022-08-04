#include<bits/stdc++.h>
using namespace std;
#define max 1005
vector<bool>prime(max,1);
vector<int>prime2;
void sieve()
{
    int i,j;
    prime[0]=false;
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
    for(i=1; i<max; i++)
    {
        if(prime[i])
        {
            prime2.push_back(i);
        }
    }
}
int main()
{
    sieve();
    int n,c;
    while(scanf("%d %d",&n,&c)==2)
    {
        int i,count=0,m,o;
        for(i=1; i<=n; i++)
        {
            if(prime[i])
            {
                count++;
            }
        }
        m=2*c;
        o=(count-m)/2;

        if(count<=m)
        {
            cout<<n<<" "<<c<<":";
            for(i=0; i<count; i++)
            {
                cout<<" "<<prime2[i];
            }
            cout<<endl;
        }
        else if(count%2==0)
        {
            cout<<n<<" "<<c<<":";
            for(i=o; i<m+o; i++)
            {
                cout<<" "<<prime2[i];
            }
            cout<<endl;
        }
        else
        {
            m=m-1;
            o=o+1;
            cout<<n<<" "<<c<<":";
            for(i=o; i<m+o; i++)
            {
                cout<<" "<<prime2[i];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}















