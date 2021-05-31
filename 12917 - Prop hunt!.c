#include <stdio.h>
#include <stdlib.h>

int main()
{
int p,h,o;
     while(scanf("%d %d %d",&p,&h,&o)!=EOF)
     {
     int d=o-p;
     if(h>d)
     {
     printf("Hunters win!\n");
     }
     if(h<=d)
     {
     printf("Props win!\n");
     }
     }
    return 0;
}
