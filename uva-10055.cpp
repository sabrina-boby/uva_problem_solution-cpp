#include<iostream>
using namespace std;
int main()
{
    long long int a,b,x;

    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a<b)
        {
            x=b-a;
            cout<<x<<endl;
        }
        else
        {
            x=a-b;
            cout<<x<<endl;
        }

    }
}
