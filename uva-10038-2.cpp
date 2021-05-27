#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int i,count=0,k,a[3100],b[3100];
        for(i=0; i<n; i++)
        {
            cin>>k;
            a[i]=k;
            if(i!=0)
            {
                b[i-1]=abs(a[i-1]-a[i]);
            }
        }

        for(i=0; i<n-1; i++)
        {
            if(b[i]!=n-i-1)
            {
                //cout<<b[i]<<" "<<n-i-1<<endl;
                count=1;
                break;
            }
        }

        if(count==0)
        {
            cout<<"Jolly"<<endl;
        }
        else
        {
            cout<<"Not jolly"<<endl;
        }
    }
}
// 5 20 14 9 5 2
// 5 20 16 13 11 10
// if(b[i-1]==n-i)

/*



#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int i,count=0,k,a[3100],b[3100];
        for(i=0; i<n; i++)
        {
            cin>>k;
            a[i]=k;
            if(i!=0)
            {
                b[i-1]=abs(a[i-1]-a[i]);
            }
        }
        sort(b,b+(n-1));
        for(i=0; i<n-1; i++)
        {
            cout<<b[i]<<endl;
            if(b[i]!=i+1)
            {
                //cout<<b[i]<<" "<<n-i-1<<endl;
                count=1;
                break;
            }
        }

        if(count==0)
        {
            cout<<"Jolly"<<endl;
        }
        else
        {
            cout<<"Not jolly"<<endl;
        }
    }
}




*/
