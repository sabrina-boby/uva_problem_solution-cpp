#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int a,b,c,d,l,i,x,count=0;
        cin>>a>>b>>c>>d>>l;
        if(a==0 && b==0 && c==0 && d==0 && l==0)
        {
            break;
        }
        for(i=0; i<=l; i++)
        {
            x=a*(i*i)+b*i+c;
            if(x%d==0)
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
