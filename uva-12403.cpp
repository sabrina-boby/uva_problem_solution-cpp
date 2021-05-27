#include<iostream>
using namespace std;
int main()
{
    int t;
    unsigned long long int sum=0;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string a;
        int i,x,p,n=0;
        getline(cin,a);
        x=a.length();
        if(a=="report")
        {
            cout<<sum<<endl;
        }
        else
        {
            for(i=7; i<x; i++)
            {
                p=a[i]-48;
                n=(n*10)+p;
            }
            sum=sum+n;
        }
    }

}
