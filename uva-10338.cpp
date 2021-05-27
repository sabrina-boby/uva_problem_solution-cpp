#include<iostream>
using namespace std;
int main()
{
    int t,s=0;
    cin>>t;
    while(t--)
    {
        string a,b;
        unsigned long long int n,add=1,i,j,flag=0,m;
        cin>>a;
        n=a.length();
        for(i=0; i<n; i++)
        {
            flag=0;
            for(j=i+1; j<n; j++)
            {
                if(a[i]==a[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                b=b+a[i];
            }
        }
        m=b.length();
        cout<<m<<" "<<b<<endl;
        if(m==1)
        {
            cout<<"Data set "<<++s<<": "<<1<<endl;
        }
        else if(m==2)
        {
            cout<<"Data set "<<++s<<": "<<2<<endl;
        }
        else if(m==3)
        {
            cout<<"Data set "<<++s<<": "<<3<<endl;
        }
        else
        {
            while(m!=2)
            {
                add=add*n;
                n--;
            }
            cout<<"Data set "<<++s<<": "<<add<<endl;
        }
    }
}
