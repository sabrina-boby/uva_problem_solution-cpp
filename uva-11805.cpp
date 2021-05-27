#include<iostream>
using namespace std;
int main()
{
    int t,s=0;
    cin>>t;
    while(t--)
    {
        int n,k,p,x,y;
        cin>>n>>k>>p;
        x=k+p;
        if(n<x)
        {
            while(n<x)
            {
                y=x-n;
                x=y;
            }
            cout<<"Case "<<++s<<": "<<y<<endl;
        }
        else
        {
            cout<<"Case "<<++s<<": "<<x<<endl;
        }
    }
}
