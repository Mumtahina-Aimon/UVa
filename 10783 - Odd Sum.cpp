#include <iostream>

using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
    cin>>a>>b;
    int sum=0;
    if(a%2==0)
    {
    for(int i=a+1;i<=b;i+=2)
    {
    sum+=i;
    }
    cout<<"Case "<<j<<": "<<sum<<endl;
    }
    else
{
    for(int i=a;i<=b;i+=2)
    {
    sum+=i;
    }
    cout<<"Case "<<j<<": "<<sum<<endl;
    }
}
    return 0;
}
