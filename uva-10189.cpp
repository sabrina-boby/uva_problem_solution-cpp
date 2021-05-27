#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;
    char a[10][10];
    int b[10][10]={0};
    cin>>n>>m;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(a[i][j]=='*')
            {
                if(a[i][j+1]!='*' && j+1<m)
                {
                    b[i][j+1]+=1;
                }
                if(a[i][j-1]!='*' && j-1>=0)
                {
                    b[i][j-1]+=1;
                }


                if(a[i-1][j-1]!='*' && i-1>=0 && j-1>=0)
                {
                    b[i-1][j-1]+=1;
                }
                if(a[i-1][j]!='*' && i-1>=0 && j>=0)
                {
                    b[i-1][j]+=1;
                }
                if(a[i-1][j+1]!='*' && i-1>=0 && j+1>=0 && j+1<m)
                {
                    b[i-1][j+1]+=1;
                }


                if(a[i+1][j-1]!='*' && i+1<n && j-1>=0)
                {
                    b[i+1][j-1]+=1;
                }
                if(a[i+1][j]!='*' && i+1<n && j>=0)
                {
                    b[i+1][j]+=1;
                }
                if(a[i+1][j+1]!='*' && i+1<n && j+1<m)
                {
                    b[i+1][j+1]+=1;
                }
            }
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(a[i][j]=='*')
            {
                cout<<a[i][j]<<" ";
            }
            else
            {
                cout<<b[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}
