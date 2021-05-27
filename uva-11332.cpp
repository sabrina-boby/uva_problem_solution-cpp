#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        long long int n;
        int x,sum=0;
        cin>>n;
        if(n==0)
        {
            break;
        }
        while(1)
        {
            sum=0;
            while(n!=0)
            {
                x=n%10;
                n=n/10;
                sum=sum+x;
            }
            n=sum;
            if(n<10)
            {
                break;
            }
        }
        cout<<sum<<endl;
    }
}
