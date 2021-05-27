#include<iostream>
#include<cmath>
#include<vector>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{

    unsigned long long int i,j,n=100,x;
    long long int a[n]= {0};

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
    //1000000000000
    vector<int>b;
    vector<int>c;
    for(i=1; i<=n; i++)
    {
        if(a[i]==0)
        {
            b.push_back(i);
        }
        else
        {
            c.push_back(i);
        }
    }

    /*for (auto i = c.begin(); i != c.end(); ++i)
        cout << *i << " ";*/

    cout<<c[9];
    int p,q,count=0,y,z;
    y=b.size();
    z=c.size();
    cin>>p>>q;
    for(i=p; i<=q; i++)
    {
        // cout<<b[i];
        for(j=2; j<=p; j++)
        {
            //cout<<c[j]<<" "<<b[i]<<endl;
            if(c[j]%b[i]==0)
            {
                count++;
            }
        }
    }
    // cout<<count<<endl;



}
