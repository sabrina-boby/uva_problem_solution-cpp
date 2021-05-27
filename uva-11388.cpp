#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int g,l,r,i,gcd,lcm;
        cin>>g>>l;
        i=g;
        if(l%i==0)
        {
            i=l;
            if(i%l==0)
            {
                cout<<g<<" "<<l<<endl;
            }
            else
            {
                cout<<-1<<endl;
            }
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
