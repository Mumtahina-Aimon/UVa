#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,k,p,t;
cin>>t;
for(int i=0;i<t;i++)
{
cin>>n>>k>>p;
if((k+p)%n==0)
{
cout<<"Case "<<i+1<<": " <<n<<endl;
}
else{
cout<<"Case "<<i+1<<": " <<(k+p)%n<<endl;
}
}

    return 0;
}
