#include<iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==0)
        {
            break;
        }
        int j;
        for(j=n+1; j<10000000; j++)
        {
            int i,count1=0,count2=0,count3=0,hishab=0,store,x,a[12],t=0,p,z,temp,k;
            for(i=2; i<j; i++)
            {
                if(j%i==0)
                {
                    count1=1;
                    break;
                }
            }

            if(count1==0)
            {
                store=j;
                cout<<"input "<<store<<endl;
                k=j;
                while(k!=0)
                {
                    x=k%10;
                    k=k/10;
                    a[count2++]=x;
                }
                sort (a,a+count2);
                do
                {
                    for(i=count2-1; i>=0; i--)
                    {
                        p=a[i];
                        z=pow(10,hishab++);
                        t=t+(p*z);
                    }
                    for(i=2; i<t; i++)
                    {
                        if(t%i==0)
                        {
                            count3=1;
                            break;
                        }
                    }
                    if(count3==1)
                    {
                        count1=1;
                        break;
                    }

                    t=0;
                    hishab=0;
                }
                while(next_permutation(a,a+count2));

                if(count3==0)
                {
                    cout<<store<<endl;
                    break;
                }
            }
        }
    }
}
