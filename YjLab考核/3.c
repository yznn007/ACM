#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int count=0;
        while(n--)
        {
            int num;
            scanf("%d",&num);
            if(num % 24 == 0) count++;
            while(num)
            {
                if(num % 10 == 8)
                {
                    count++;
                    break;
                }
                num /= 10;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}