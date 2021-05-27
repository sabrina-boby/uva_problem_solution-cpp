#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&e)==5)
    {
        if(a+b+c+d+e==0)
        {
            break;
        }
        cout<<a*b*c*d*d*e*e<<endl;
    }
}
