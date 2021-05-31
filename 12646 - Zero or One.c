#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
    if(a==b && b==a && c==a)
    {
    printf("*\n");
    }
    else if(a==b && c!=a)
    {
    printf("C\n");
    }
    else if(c==b && c!=a)
    {
    printf("A\n");
    }
    else if(a==c && b!=a)
    {
    printf("B\n");
    }
    }
    return 0;
}
