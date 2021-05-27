#include<iostream>
using namespace std;
int main()
{
    int t,s=0;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string a,b,c="";
        int n,m,i,count=0,k;
        getline(cin,a);
        getline(cin,b);
        n=a.length();
        if(a==b)
        {
            cout<<"Case "<<++s<<": "<<"Yes"<<endl;
        }
        else
        {
            for(i=0; i<n; i++)
            {
                if(a[i]!=' ')
                {
                    c=c+a[i];
                }
            }
            if(c!=b)
            {
                cout<<"Case "<<++s<<": "<<"Wrong Answer"<<endl;
            }
            else
            {
                cout<<"Case "<<++s<<": "<<"Output Format Error"<<endl;
            }
        }
    }
}
