#include <algorithm>
#include<iostream>
using namespace std;

long long int separate(long long int numb, long long int array[])
{
    long long int count=0,n;
    while(numb!=0)
    {
        n=numb%10;
        numb=numb/10;
        array[count++]=n;
    }
    return count;
}

int main()
{
    long long int x,y;
    while(scanf("%lld %lld",&x,&y))
    {
        long long int p,q,m,a[12]= {0},b[12]= {0},i,t=0,v=0,k;

        if(!x && !y)
        {
            break;
        }
        p=separate(x,a);
        q=separate(y,b);

        reverse(a, a + p);
        reverse(b, b + q);

        if(p>q)
        {
            m=p;
        }
        else
        {
            m=q;
        }
        for(i=0; i<m; i++)
        {
            k=b[i]+a[i]+t;
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

