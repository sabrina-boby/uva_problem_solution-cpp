#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main()
{
    while(1)
    {
        int n,r,count=0,store=0,i;
        vector<int>a;
        cin>>n;
        if(n==0)
        {
            break;
        }
        while(n!=0)
        {
            r=n%2;
            n=n/2;
            if(r==1)
            {
                count++;
            }
            a.push_back(r);
        }
        cout<<"The parity of ";
        reverse(a.begin(), a.end());
        for(auto i=a.begin(); i!=a.end(); i++)
        {
            cout<<*i;
        }
        cout<<" is "<<count<<" (mod 2)."<<endl;
    }
}

