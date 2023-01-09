#include<bits/stdc++.h>
using namespace std;

int func(int a, int b)
{
    return a+b;
}
//using namespace info
namespace Info
{
    int x=10, y=40;
    int func(int a, int b)
    {
    return a*b;
    }
}

int main()
{
    int a=5;
    int b=4;
    int res= func(a,b);
    cout<<res<<"\n";

    //using namespace info the output is..
    int res2=Info::func(a,b);
    cout<<res2<<"\n";

    return 0;
}
