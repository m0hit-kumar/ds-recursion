#include<iostream>
using namespace std;

int power(int n,int x)
{ int result =0;
    if(n==1)
    {

        return x;

    }
    if(n==0)
    {
        return 1;

    }

    result=x*power(n-1,x);

    return result;

}

int main()
{
    int b,p,ans=0;
    cin>>b;
    cin>>p;
    ans=power(p,b);
    cout<<ans;

}








