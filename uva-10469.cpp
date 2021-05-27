#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    signed long long int n,m;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int r,i,a[33]= {0},b[33]= {0},f=0,g=0;
        while(n!=0)
        {
            r=n%2;
            n=n/2;
            a[f++]=r;
        }
        while(m!=0)
        {
            r=m%2;
            m=m/2;
            b[g++]=r;
        }
        vector<int>c;
        for(i=0; i<=32; i++)
        {
            if(a[i]==0 && b[i]==1 || a[i]==1 && b[i]==0)
            {
                c.push_back(1);
            }
            else
            {
                c.push_back(0);
            }
        }
        reverse(c.begin(),c.end());

        int sum=0,x,j,p,tx;
        tx = c.size();
        for(auto i=c.begin(); i!=c.end(); i++)
        {
            p=1;
            if(*i==1)
            {
                for(j=0; j<tx-1; j++)
                {
                    p=p*2;
                }
                x=*i *p;
                sum=sum+x;
            }
            --tx;
        }
        cout<<sum<<endl;
    }
}
