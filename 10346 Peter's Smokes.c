#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,k;
while(scanf("%d%d",&n,&k)!=EOF){
int ans;
ans=n+(n-1)/(k-1);
printf("%d\n",ans);
}
    return 0;
}
