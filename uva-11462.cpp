#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    int t,n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        int i;
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[0];
        for(i=1; i<n; i++)
        {
            cout<<" "<<a[i];
        }
        cout<<endl;
    }
}
