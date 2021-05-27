#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int n,m,i,j,flag=0;
        cin>>n;
        if(n==0)
        {
            break;
        }
        m=n/3;
        for(i=1; i<=m; i++)
        {
            for(j=1; j<=i; j++)
            {
                if((i*i*i)-(j*j*j)==n)
                {
                    cout<<i<<" "<<j<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==0)
        {
            cout<<"No solution"<<endl;
        }
    }
}
