#include <stdio.h>
int max(int x,int y){
    return x>y?x:y;
}
int main()
{
    int n,maxv,curr;
    scanf("%d%d", &n, &maxv);
    for(int count=2;count<=n;count++)
    {
        scanf("%d", &curr);
        maxv=max(maxv,curr);
    }
    printf("%d", maxv);
}