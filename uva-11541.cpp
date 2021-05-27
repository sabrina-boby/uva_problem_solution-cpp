#include<iostream>
using namespace std;
int main()
{
    int t,s=0;
    cin>>t;
    while(t--)
    {
        string a,b="";
        char x;
        int i,r,n,p=0,j;
        cin>>a;
        n=a.length();
        for(i=0; i<n; i++)
        {
            if('0'<=a[i] && a[i]<='9')
            {
                r=a[i]-'0';
                p=(p*10)+r;
            }
            else
            {
                x=a[i];
                p=0;
                continue;
            }
            if('A'<=a[i+1] && a[i+1]<='Z' || i==n-1)
            {
                for(j=0; j<p; j++)
                {
                    b=b+x;
                }
            }
        }
        cout<<"Case "<<++s<<": "<<b<<endl;
    }
}
