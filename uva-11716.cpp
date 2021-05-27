#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string a,b="";
        int n,i,k=0;
        float p,q;
        getline(cin,a);
        n=a.length();
        p=sqrt(n);
        q=ceil(p);
        if(p!=q)
        {
            cout<<"INVALID"<<endl;
        }
        else
        {
            while(1)
            {
                for(i=k; i<n; i=i+p)
                {
                    b=b+a[i];
                }
                ++k;
                if(k==p)
                {
                    break;
                }
            }
            cout<<b<<endl;
        }
    }
}
