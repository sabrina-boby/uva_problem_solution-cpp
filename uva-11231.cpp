#include<iostream>
using namespace std;
int main()
{
    int n,m,c,p,q,count=0;
    cin>>n>>m>>c;
    while(n>=8)
    {
        count++;
        n=n-2;
    }

   // q=n/8;
    cout<<count<<endl;
}
