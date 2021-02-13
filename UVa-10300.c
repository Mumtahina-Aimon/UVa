#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,f,i,j,k,l,m,result=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&f);
int result=0;
    for(j=0; j<f; j++)
    {
        scanf("%d %d %d",&k,&l,&m);

result=result+(k*m);

    }

    printf("%d\n",result);
    }
    return 0;
}
