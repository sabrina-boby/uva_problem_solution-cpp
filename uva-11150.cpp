#include<iostream>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    int n;
    while(scanf("%d", &n) == 1)
    {
        int x,y,s,sum;
        sum=n;
        while(n>=2)
        {
            x=n/3;
            sum=sum+x;
            y=n%3;
            n=x+y;
            if(n==2)
            {
                n=n+1;
            }
        }
        cout<<sum<<endl;
    }
}
