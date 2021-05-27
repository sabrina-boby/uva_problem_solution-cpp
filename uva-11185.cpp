#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n<0)
        {
            break;
        }
        unsigned long long int r,i;
        vector<unsigned long long int> a;
        if(n==0)
        {
            cout<<0<<endl;
        }
        else
        {
            while(n!=0)
            {
                r=n%3;
                a.push_back(r);
                n=n/3;
            }
            reverse(a.begin(),a.end());
            for(auto i = a.begin(); i != a.end(); ++i)
            {
                cout<<*i;
            }
            cout<<endl;
        }
    }
}
