#include<iostream>
using namespace std;
int main()
{
    long long n,p,q,k,x,t;
    cin>>t;
    while(t--)
    {
        cin>>x>>k;
        q=x%k;
        if(x>=k)
        {
            p=k-q;
            cout<<p<<" "<<q<<endl;
        }
        else
        cout<<"0"<<" "<<q<<endl;
    }
}
