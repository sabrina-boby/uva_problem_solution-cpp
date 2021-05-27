#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,x=1;
    cin>>t;
    while(t--)
    {
        int a[3],i,n;
        for(i=0; i<3; i++)
        {
            cin>>n;
            a[i]=n;
        }
        sort(a,a+3);

        cout<<"Case "<<x++<<": "<<a[1]<<endl;
    }
}
