#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,count=0,k,a[3001],j,b[3001];
    while(cin>>n)
    {
        for(i=0; i<n; i++)
        {
            cin>>k;
            a[i]=k;
        }
        for(i=0,j=0; i<n-1; i++,j++)
        {
            if(a[i]<a[i+1])
            {
                b[j]=a[i+1]-a[i];
            }
            else
            {
                b[j]=a[i]-a[i+1];
            }
            //cout<<b[j]<<endl;
        }

        for(j=0; j<n-2; j++)
        {
            if(b[j]-1==b[j+1] && b[0]==(n-1))
            {
                count=0;
            }
            else
            {
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
