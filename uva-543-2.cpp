#include<iostream>
#include<cmath>
#include<vector>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{

    int i,j,n=1000000,x;
    int a[n]= {0};

    x=sqrt(n);
    for(i=2; i<=x; i++)
    {
        if(a[i]==0)
        {
            for(j=i; i*j<=n; j++)
            {
                a[i*j]=1;
            }
        }
    }

    int m;
    while(scanf("%d",&m)==1)
    {
        int p=0;
        j=0;
        if(m==0)
        {
            break;
        }

        for(i=2; i<m; i++)
        {
            if(a[i]==0)
            {
                j=m-i;
                if(a[j]==0)
                {
                    cout<<m<<" = "<<i<<" + "<<j<<endl;
                    p=1;
                    break;
                }
            }
        }
        if(p==0)
        {
            cout<<"Goldbach's conjecture is wrong."<<endl;
        }
    }
}

