#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,d,e,f,k,i=0,s;
        cin>>n;
        a=n*567;
        b=a/9;
        c=b+7492;
        d=c*235;
        e=d/47;
        f=e-498;
        while(f!=0)
        {
            k=f%10;
            f=f/10;
            ++i;
            if(i==2)
            {
                s=k;
            }
        }
        cout<<abs(s)<<endl;
    }
}
