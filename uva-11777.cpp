#include<iostream>
using namespace std;
int main()
{
    int t,s=0;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,e,f,g,x,sum=0;
        cin>>a>>b>>c>>d>>e>>f>>g;
        if(e<=f && e<=g)
        {
            x=(f+g)/2;
        }
        else if(f<=e && f<=g)
        {
            x=(e+g)/2;
        }
        else
        {
            x=(e+f)/2;
        }
        sum=a+b+c+d+x;
        if(90<=sum)
        {
            cout<<"Case "<<++s<<": "<<"A"<<endl;
        }
        else if(80<=sum)
        {
            cout<<"Case "<<++s<<": "<<"B"<<endl;
        }
        else if(70<=sum)
        {
            cout<<"Case "<<++s<<": "<<"C"<<endl;
        }
        else if(60<=sum)
        {
            cout<<"Case "<<++s<<": "<<"D"<<endl;
        }
        else
        {
            cout<<"Case "<<++s<<": "<<"F"<<endl;
        }
    }
}
