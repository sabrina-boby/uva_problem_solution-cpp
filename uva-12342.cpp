#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,s=0;
    cin>>t;
    while(t--)
    {
        long long int n,sum=0,y;
        long double x;
        cin>>n;
        if(n<=180000)
        {
            cout<<"Case "<<++s<<": "<<0<<endl;
        }
        else
        {
            n=n-180000;
            if(n<=300000)
            {
                x=((10.0*n)/100);
                if(x<=2000)
                {
                    cout<<"Case "<<++s<<": "<<2000<<endl;
                }
                else
                {
                    y=ceil(x);
                    cout<<"Case "<<++s<<": "<<y<<endl;
                }
            }
            else
            {
                sum=sum+30000;
                n=n-300000;
                if(n<=400000)
                {
                    x=((15.0*n)/100)+sum;
                    y=ceil(x);
                    cout<<"Case "<<++s<<": "<<y<<endl;
                }
                else
                {
                    sum=sum+60000;
                    n=n-400000;
                    if(n<=300000)
                    {
                        x=((20.0*n)/100)+sum;
                        y=ceil(x);
                        cout<<"Case "<<++s<<": "<<y<<endl;
                    }
                    else
                    {
                        sum=sum+60000;
                        n=n-300000;
                        x=((25.0*n)/100)+sum;
                        y=ceil(x);
                        cout<<"Case "<<++s<<": "<<y<<endl;
                    }
                }
            }
        }
    }
}
