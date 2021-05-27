#include<iostream>
using namespace std;
int main()
{
    string a;
    while(1)
    {
        cin>>a;
        if(a=="Hajj")
        {
            cout<<"Hajj-e-Akbar"<<endl;
        }
        else if(a=="Umrah")
        {
            cout<<"Hajj-e-Asghar"<<endl;
        }
        else if(a=="*")
        {
            break;
        }
    }
}
