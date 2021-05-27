#include<iostream>
using namespace std;
int main()
{
    int t,s=0;
    cin>>t;
    while(t--)
    {
        long long int a,b,c;
        cin>>a>>b>>c;
        if(a+b<=c || b+c<=a || a+c<=b)
        {
            cout<<"Case "<<++s<<": "<<"Invalid"<<endl;
        }
        else if(a==b && b==c)
        {
            cout<<"Case "<<++s<<": "<<"Equilateral"<<endl;
        }
        else if(a!=b && b!=c && c!=a)
        {
            cout<<"Case "<<++s<<": "<<"Scalene"<<endl;
        }
        else
        {
            cout<<"Case "<<++s<<": "<<"Isosceles"<<endl;
        }
    }
}
