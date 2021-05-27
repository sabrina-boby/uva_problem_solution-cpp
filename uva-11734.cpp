#include<iostream>
using namespace std;
int main()
{
    int t,s=0;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string a,b;
        int n,m,i,count=0,k;
        getline(cin,a);
        getline(cin,b);
        n=a.length();
        m=b.length();
        if(n>m)
        {
            k=n;
        }
        else
        {
            k=m;
        }
        for(i=0; i<k; i++)
        {
            if(a[i]==b[i])
            {
                count++;
            }
            else
            {
                if(a[i]==' ' && b[i]!=' ' || a[i]!=' ' && b[i]==' ')
                {
                    cout<<"Case "<<++s<<": "<<"Output Format Error"<<endl;
                    break;
                }
                else
                {
                    cout<<"Case "<<++s<<": "<<"Wrong Answer"<<endl;
                    break;
                }
            }
        }
        if(count==k)
        {
            cout<<"Case "<<++s<<": "<<"Yes"<<endl;
        }
    }
}
