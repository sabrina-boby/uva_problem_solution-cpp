#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,c;
    while (cin>>a>>b>>c)
    {
        /*float r,circle2,q,p,triangle,circle1;
        r=(a+b-c)/2;
        circle2=3.14159*r*r;

        q=(0.5)*a*b;
        triangle=q-circle2;

        p=(a*(c/a))/2;
        circle1=(3.14159*p*p);
        cout<<p<<endl;
        cout<<fixed<<setprecision(4)<<circle1-q<<" ";
        cout<<fixed<<setprecision(4)<<triangle<<" ";
        cout<<fixed<<setprecision(4)<<circle2<<endl;
        */

        double S,p,r,R,S1,S2,S3;
        p=(a+b+c)*0.5;
        //cout<<p<<endl;
        S=sqrt(p*(p-a)*(p-b)*(p-c));
        //cout<<S<<endl;
        R=a*b*c/4/S;
        //cout<<R<<endl;
        r=sqrt((p-a)*(p-b)*(p-c)/p);

        S1=3.14159*R*R-S;
        S3=3.14159*r*r;
        S2=S-S3;
        cout<<fixed<<setprecision(4)<<S1<<" ";
        cout<<fixed<<setprecision(4)<<S2<<" ";
        cout<<fixed<<setprecision(4)<<S3<<endl;
    }
}
