#include<stdio.h>
int main()
{
    printf("Enter number :");
    int x;
    scanf("%d",&x);
    int row=1;
    x=x*2-1;
      for(int j=1;j<=x;j++)
       {
           for(int i=1;i<=x;i++)
           {
               if(i<=row || i>=x-row+1)
               {
                printf("*");
                 }
               else
               {
                 printf(" ");
               }
             }
           if(j<=x/2)
        	   row++;
           else
              row--;
            printf("\n");
     }
}

