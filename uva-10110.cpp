#include<iostream>
#include<cmath>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    long long int n;
    while(scanf("%lld",&n))
    {
        if(n==0)
        {
            break;
        }
        long long int root;
        root=sqrt(n);
        if(root*root==n)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
