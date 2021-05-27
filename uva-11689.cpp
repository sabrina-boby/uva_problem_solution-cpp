#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int p,q,r,sum=0,count=0,x,hishab=0;
        cin>>p>>q>>r;
        sum=p+q;
        while(r<=sum)
        {
            x=sum%r;//0 1 0
            sum=sum/r;//5 2 1
            count=count+x;//0 1 1
            hishab=hishab+sum;
            if(sum<r)
            {
                sum=sum+count;
                count=0;
            }
        }
        cout<<hishab<<endl;
    }
}

