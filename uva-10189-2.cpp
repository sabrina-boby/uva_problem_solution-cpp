#include<iostream>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fast
    int n,m,count=0;
    while(scanf("%d %d",&n,&m))
    {
        if(n==0 && m==0)
        {
            break;
        }
        int i,j;
        char a[100][100];
        int b[100][100]= {0};


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

                    b[i][j+1]+=1;

                    b[i][j-1]+=1;




                    b[i-1][j-1]+=1;

                    b[i-1][j]+=1;

                    b[i-1][j+1]+=1;




                    b[i+1][j-1]+=1;

                    b[i+1][j]+=1;

                    b[i+1][j+1]+=1;
                }
            }
        }
        cout<<"Field #"<<++count<<":"<<endl;


        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                if(a[i][j]=='*')
                {
                    cout<<a[i][j];
                }
                else
                {
                    cout<<b[i][j];
                }
            }
            cout<<endl;
        }
        if(n!=0 && m!=0)
        {
            cout<<endl;
        }

    }
}

