#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int G=0,N,i,j,min,k;
        cin>>N;
        if(N==0)
        {
            break;
        }
        for(i=1; i<N; i++)
        {
            for(j=i+1; j<=N; j++)
            {
                if(i<j)
                {
                    min=i;
                }
                else
                {
                    min=j;
                }
                for(k=min; k>=1; k--)
                {
                    if(i%k==0 && j%k==0)
                    {
                        G=G+k;
                        break;
                    }
                }
            }
        }
        cout<<G<<endl;
    }
}
