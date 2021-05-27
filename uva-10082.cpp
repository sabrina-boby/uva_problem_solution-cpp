#include<iostream>
using namespace std;
int main()
{
    char a[]= {'`','1','2','3','4','5','6','7','8','9','0','-','=',
               'Q','W','E','R','T','Y','U','I','O','P','[',']','\\',
               'A','S','D','F','G','H','J','K','L',';','\'',
               'Z','X','C','V','B','N','M',',','.','/',
              };
    string b;
    while(getline(cin,b))
    {
        char k;
        string c="";
        int n,i,j,flag=0;
        n=b.length();
        for(i=0; i<n; i++)
        {
            k=b[i];
            for(j=0; j<47; j++)
            {
                flag=0;
                if(b[i]==a[j])
                {
                    c=c+a[j-1];
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                c=c+k;
            }
        }
        cout<<c<<endl;
    }
}
