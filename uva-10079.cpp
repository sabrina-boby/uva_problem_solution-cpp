#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        long long int n,i,sum=0;
        cin>>n;
        if(n<0)
        {
            break;
        }
        cout<<((n*(n+1))/2)+1<<endl;
    }
}


