#include<iostream>
#include <vector>
#include<cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    //1000000
    long long int N=1000002,i,j,x;
    long long int a[N]= {0};
    x=sqrt(N);
    a[1]=1;
    for(i=2; i<=x; i++)
    {
        if(a[i]==0)
        {
            for(j=i; i*j<=N; j++)
            {
                a[i*j]=1;
            }
        }
    }

    while(1)
    {
        int n,k,l,s,y,flag=0,sum=1;
        cin>>n;
        vector<int>b;
        if(n==0)
        {
            break;
        }
        else if(n==1)
        {
            cout<<1<<" "<<1<<" "<<1<<endl;
        }
        else
        {
            for(s=2; s<=n; s++)
            {
                i=2;
                k=s;
                b.clear();
                flag=0;
                //cout<<s<<endl;
                while(k!=1)
                {
                    if(a[i]==0 && k%i==0)
                    {
                        k=k/i;

                        b.push_back(i);
                        if(k==1)
                        {
                            l=b.size();
                            for(y=0; y<l; y++)
                            {
                                if(b[y]==b[y+1])
                                {
                                    sum=sum+0;
                                    if(s==n)
                                        cout<<s<<" "<<0<<" "<<sum<<endl;
                                    flag=1;
                                    break;
                                }
                            }
                            if(flag==0)
                            {
                                if(l%2==0)
                                {
                                    sum=sum+1;
                                    if(s==n)
                                        cout<<s<<" "<<1<<" "<<sum<<endl;
                                }
                                else
                                {
                                    sum=sum+(-1);
                                    if(s==n)
                                        cout<<s<<" "<<-1<<" "<<sum<<endl;
                                }
                            }
                        }
                    }
                    else
                    {
                        i++;
                    }
                }
            }

        }
    }
}
