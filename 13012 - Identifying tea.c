#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t,a[5],b,m,d,e,i;
    while(scanf("%d",&t)==1)
    {
    int c=0;
    for(int i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]==t)
    {
    c++;
    }
    }
    printf("%d\n",c);
    }
    return 0;
}
