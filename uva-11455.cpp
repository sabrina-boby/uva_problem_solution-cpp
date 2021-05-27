#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b && b==c && c==d)
        {
            cout<<"square"<<endl;
        }
        else if((a==c && b==d)||(a==b && c==d)||(b==c && a==d))
        {
            cout<<"rectangle"<<endl;
        }
        else if(a>b+c+d || b>a+c+d || c>a+b+d || d>a+b+c)
        {
            cout<<"banana"<<endl;
        }
        else
        {
            cout<<"quadrangle"<<endl;
        }
    }
}
