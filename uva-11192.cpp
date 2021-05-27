#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n)
    {
        long long int i,m,x,y=0,s,p;
        string a,b;
        cin>>a;
        m=a.length();
        x=(m/n)-1;
        p=x;
        s=n;
        while(s--)
        {
            for(i=x; i>=y; i--)
            {
                b=b+a[i];
            }
            if(y==(m-1))
            {
                break;
            }
            y=x+1;
            x=(y+p);
        }
        cout<<b<<endl;
        cin>>n;
    }
    return 0;
}
