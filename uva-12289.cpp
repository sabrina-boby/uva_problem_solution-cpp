#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        int n,i;
        cin>>a;
        n=a.length();
        if(n==5)
        {
            cout<<3<<endl;
        }
        else if(a[1]=='n' && a[2]=='e' || a[0]=='o' && a[2]=='e' || a[0]=='o' && a[1]=='n')
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
}
