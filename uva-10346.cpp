#include<iostream>
using namespace std;
int main()
{
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        long long int sum=a,n;
        while(a>=b)
        {
            n=(a/b);
            sum=sum+n;
            a=n+(a%b);
        }
        cout<<sum<<endl;
    }
}
