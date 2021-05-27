#include<iostream>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int a[n];
        int i,j,temp,count=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n-1; j++)
            {
                if(a[j]>a[j+1])
                {
                    ++count;
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<count<<endl;
    }
}
