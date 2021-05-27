#include<iostream>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {
        int n,x,sum=0,m;
        cin>>n;
        m=n;
        while(1)
        {
            sum=0;
            while(n!=0)
            {
                x=n%10;
                n=n/10;
                sum=sum+(x*x);
            }
            n=sum;
            if(n<10)
            {
                break;
            }
        }
        if(sum==1)
        {
            cout<<"Case #"<<++c<<": "<<m<<" is a Happy number."<<endl;
        }
        else
        {
            cout<<"Case #"<<++c<<": "<<m<<" is an Unhappy number."<<endl;
        }
    }
}
