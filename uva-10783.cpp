#include<iostream>
using namespace std;
int main()
{
    int a,b,i,count=0,n,j=1;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        count=0;
        for(i=a; i<=b; i++)
        {
            if(i%2==1)
            {
                count=count+i;
            }
        }
        cout<<"Case "<<j++<<": "<<count<<endl;
    }
}
