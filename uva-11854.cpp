#include<iostream>
using namespace std;
int main()
{
    int p,q,r;
    while(scanf("%d%d%d",&p,&q,&r))
    {
        if(p==0 && q==0 && r==0)
        {
            break;
        }

        else if(p<r && q<r)
        {
            if((p*p)+(q*q)==(r*r))
            {
                cout<<"right"<<endl;
            }
            else
            {
                cout<<"wrong"<<endl;
            }
        }
        else if(p<q && r<q)
        {
            if((p*p)+(r*r)==(q*q))
            {
                cout<<"right"<<endl;
            }
            else
            {
                cout<<"wrong"<<endl;
            }
        }
        else
        {
            if((r*r)+(q*q)==(p*p))
            {
                cout<<"right"<<endl;
            }
            else
            {
                cout<<"wrong"<<endl;
            }
        }
    }
}
