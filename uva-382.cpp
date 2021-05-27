#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cout<<"PERFECTION OUTPUT"<<endl;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            cout<<"END OF OUTPUT"<<endl;
            break;
        }
        int r,sum=0,i;
        r=n/2;
        for(i=1; i<=r; i++)
        {
            if(n%i==0)
            {
                sum=sum+i;
            }
        }
        cout<<setw(5)<<n;
        if(sum==n)
        {
            cout<<"  PERFECT"<<endl;
        }
        else if(n<sum)
        {
            cout<<"  ABUNDANT"<<endl;
        }
        else
        {
            cout<<"  DEFICIENT"<<endl;
        }
    }
}
