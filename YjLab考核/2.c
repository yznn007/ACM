#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a;
        char c;
        scanf(" %c",&c);
        printf("  %d\n",c);
        printf(" %d%d%d\n",c,c,c);
        printf("%d%d%d%d%d\n",c,c,c,c,c);
    }
    return 0;
}