#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string a,b,c="",d="";
        int n,m,i;
        getline(cin,a);
        getline(cin,b);
        n=a.length();
        m=b.length();
        if(n!=m)
        {
            cout<<"No"<<endl;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
                {
                    c=c+'*';
                }
                else
                {
                    c=c+a[i];
                }
            }
            for(i=0; i<m; i++)
            {
                if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u')
                {
                    d=d+'*';
                }
                else
                {
                    d=d+b[i];
                }
            }
            if(c==d)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
}
