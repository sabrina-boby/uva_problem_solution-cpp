#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    string a;
    while(getline(cin,a))
    {
        string b="";
        for(auto x: a)
        {
            if('A'<=x && x<='C')
            {
                b=b+'2';
            }
            else if('D'<=x && x<='F')
            {
                b=b+'3';
            }
            else if('G'<=x && x<='I')
            {
                b=b+'4';
            }
            else if('J'<=x && x<='L')
            {
                b=b+'5';
            }
            else if('M'<=x && x<='O')
            {
                b=b+'6';
            }
            else if('P'<=x && x<='S')
            {
                b=b+'7';
            }
            else if('T'<=x && x<='V')
            {
                b=b+'8';
            }
            else if('W'<=x && x<='Z')
            {
                b=b+'9';
            }
            else
            {
                b=b+x;
            }
        }
        cout<<b<<endl;
    }
}
