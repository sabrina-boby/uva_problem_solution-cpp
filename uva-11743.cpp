#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string a;
        int n,i,x,y,z,sum=0,sum2=0,result;
        getline(cin,a);
        n=a.length();
        for(i=0; i<n; i++)
        {
            if((i==0 || i==2 || i==5 || i==7 || i==10 || i==12 || i==15 || i==17) && a[i]!='0')
            {
                x=a[i]-'0';
                y=x*2;
                if(10<=y)
                {
                    sum=sum+(y%10);
                    sum=sum+(y/10);
                }
                else
                {
                    sum=sum+y;
                }
            }
            else if((i==1 || i==3 || i==6 || i==8 || i==11 || i==13 || i==16 || i==18) && a[i]!='0')
            {
                x=a[i]-'0';
                sum2=sum2+x;
            }
        }
        z=sum+sum2;
        result=z%10;
        if(result==0)
        {
            cout<<"Valid"<<endl;
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
    }
}
