#include<iostream>
using namespace std;
int main()
{
    int t,s=0;
    cin>>t;
    while(t--)
    {
        int n,m,i,j=0,store,k;
        cin>>n;
        m=(n/2)+1;
        for(i=0; i<n; i++)
        {
            cin>>k;
            ++j;
            if(j==m)
            {
                store=k;
            }
        }
        cout<<"Case "<<++s<<": "<<store<<endl;
    }
}
