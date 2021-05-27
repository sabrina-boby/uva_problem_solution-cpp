#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    while(1)
    {
        int n,m,i,count=0;
        float x,y;
        cin>>n>>m;
        if(n==0 && m==0)
        {
            break;
        }
        for(i=n; i<=m; i++)
        {
            x=sqrt(i);
            y=ceil(x);
            if(x==y)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
