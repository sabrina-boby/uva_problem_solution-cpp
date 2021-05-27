#include<iostream>
using namespace std;
int main()
{
    long long int n,m,i=1,count=1,j=0,k,max = 0,p,q;

    while(scanf("%lld %lld",&m,&k)!=EOF)
    {
        if(m>0 && m<1000000 && k>0 && k< 1000000)
        {
            if(k<m)
            {
                p=k;
                q=m;
            }
            else
            {
                p=m;
                q=k;
            }
            for(i=p; i<=q; i++)
            {
                n=i;
                count=1;

                while(n!=1)
                {
                    if(n%2==1)
                    {
                        n=3*n+1;
                    }
                    else
                    {
                        n=n/2;
                    }
                    count++;
                }

                if(max < count)
                    max=count;
            }

            cout<<m<<" "<<k<<" "<<max<<endl;
        }
    }
}
