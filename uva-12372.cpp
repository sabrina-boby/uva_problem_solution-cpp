#include<iostream>
using namespace std;
int main()
{
    int t,s=0;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a<=20 && b<=20 && c<=20)
        {
            cout<<"Case "<<++s<<": "<<"good"<<endl;
        }
        else
        {
            cout<<"Case "<<++s<<": "<<"bad"<<endl;
        }
    }
}

