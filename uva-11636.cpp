#include<iostream>
using namespace std;
int main()
{
    int t=0;
    while(1)
    {
        long long int n,m=1,k,count=0;
        cin>>n;
        if(0>n)
        {
            break;
        }
        while(m<n)
        {
            k=m*2;
            m=k;
            ++count;
        }
        cout<<"Case "<<++t<<": "<<count<<endl;
    }
}
