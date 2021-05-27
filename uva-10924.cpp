#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    long long int i,j,n=1050,k;
    long long int a[n]= {0};

    k=sqrt(n);
    for(i=2; i<=k; i++)
    {
        if(a[i]==0)
        {
            for(j=i; i*j<=n; j++)
            {
                a[i*j]=1;
            }
        }
    }

    string b;
    while(getline(cin,b))
    {
        int p,sum=0;
        for(auto x: b)
        {
            if('a'<=x && x<='z')
            {
                p=x-'a';
                sum=sum+(p+1);
            }
            else if('A'<=x && x<='Z')
            {
                p=x-'A';
                sum=sum+(p+27);
            }
        }
        if(a[sum]==0)
        {
            cout<<"It is a prime word."<<endl;
        }
        else
        {
            cout<<"It is not a prime word."<<endl;
        }

    }
}
