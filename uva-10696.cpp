/*#include<iostream>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==0)
        {
            break;
        }
        else if(n<=100)
        {
            cout<<"f91("<<n<<") = "<<91<<endl;
        }
        else if(n>=101)
        {
            cout<<"f91("<<n<<") = "<<n-10<<endl;
        }
    }
}
*/

#include <iostream>
using namespace std;

int f91(int n)
{
    cout<<n<<endl;
    if (n >= 101)
        return n - 10;
    if (n <= 100)
        return f91(f91(n + 11));
}

int main()
{
    int n;

    printf("%d ",f91(1));
    return 0;
}
