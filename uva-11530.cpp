#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int count=0;
        string a;
        getline(cin,a);
        for(auto x: a)
        {
            if(x=='a' || x=='d' || x=='g' || x=='j' || x=='m' || x=='p' || x=='t' || x=='w' || x==' ')
            {
                count+=1;
            }
            else if(x=='b' || x=='e' || x=='h' || x=='k' || x=='n' || x=='q' || x=='u' || x=='x')
            {
                count+=2;
            }
            else if(x=='c' || x=='f' || x=='i' || x=='l' || x=='o' || x=='r' || x=='v' || x=='y')
            {
                count+=3;
            }
            else if(x=='s' || x=='z')
            {
                count+=4;
            }
        }
        cout<<"Case #"<<++c<<": "<<count<<endl;
    }
}
