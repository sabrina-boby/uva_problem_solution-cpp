#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    int m=0;
    while(1)
    {
        double w,x,y,z,s,a,t,v,u;
        cin>>w;
        if(w==0)
        {
            break;
        }
        else if(w==1)
        {
            cin>>x>>y>>z;
            a=(y-x)/z;
            s= x*z + 0.5 *a*(z*z);
            cout<<"Case "<<++m<<": "<<fixed<<setprecision(3)<<s<<" ";
            cout<<fixed<<setprecision(3)<<a<<endl;
        }
        else if(w==2)
        {
            cin>>x>>y>>z;
            t=(y-x)/z;
            s= x*t + 0.5 *z*(t*t);
            cout<<"Case "<<++m<<": "<<fixed<<setprecision(3)<<s<<" ";
            cout<<fixed<<setprecision(3)<<t<<endl;
        }
        else if(w==3)
        {
            cin>>x>>y>>z;
            v=sqrt((x*x) + 2*y*z);
            t=(v-x)/y;
            cout<<"Case "<<++m<<": "<<fixed<<setprecision(3)<<v<<" ";
            cout<<fixed<<setprecision(3)<<t<<endl;
        }
        else
        {
            cin>>x>>y>>z;
            u=sqrt((x*x)-2*y*z);
            t=(x-u)/y;
            cout<<"Case "<<++m<<": "<<fixed<<setprecision(3)<<u<<" ";
            cout<<fixed<<setprecision(3)<<t<<endl;
        }

    }
}
