#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        long long int n,m;
        cin>>n;
        if(n==-1)
        {
            break;
        }
        m=100-(100/n);
        cout<<m<<"%"<<endl;
    }
}
