#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a[100],i,l,temp,j,count=0;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>l;
            a[i]=l;
        }
        for(j=0; j<n; j++)
        {
            for(i=0; i<n-1; i++)
            {
                if(a[i]>a[i+1])
                {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
                    count++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
    }
}

