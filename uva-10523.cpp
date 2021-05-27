#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a,i,sum=0,p,x;
    cin>>n>>a;
    for(i=1; i<=n; i++)
    {
        p=pow(a,i);
        x=i*p;
        sum=sum+x;
    }
    cout<<sum<<endl;
}
