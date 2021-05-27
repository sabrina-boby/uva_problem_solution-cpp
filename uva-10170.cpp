#include<iostream>
using namespace std;
int main()
{
    long long int s=0,d=0;
    while(cin>>s>>d)
    {
        long long int i=0,k=0,ans=0;
        for(i=1; i<=d; i=i+k)
        {
            ans=s;
            k=s;
            s=s+1;
        }
        cout<<ans<<endl;
    }
}
