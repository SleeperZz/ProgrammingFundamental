#include <stdio.h>
int main()
{
    int n;
    printf("number :");
    scanf("%d",&n);
    printf("factoring :");
    for (int x = 2; n>1; x++)
    {
        while (n%x==0)
        {
            if(x==n)
            {
                printf(" %d",x);
                n=n/x;
            }
            else
            {
                printf(" %d x",x);
                n=n/x;
            }
        }
    }
    
}