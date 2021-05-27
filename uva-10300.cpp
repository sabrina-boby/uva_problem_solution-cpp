#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,a,b,c,sum=0,k;
        cin>>n;
        while(n--)
        {
            cin>>a>>b>>c;
            k=a*c;
            sum=sum+k;
        }
        cout<<sum<<endl;
    }
}
