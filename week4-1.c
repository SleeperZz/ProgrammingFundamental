#include<stdio.h>
int main()
{
    int x,y,z,re;
    printf("Enter 3 numbers :");
    scanf("%d,%d,%d",&x,&y,&z);
    if(x > y && x > z)
    {       
        printf("Max number is %d",x);   
    }
    else if(y > x && y > z)
    {
        printf("Max number is %d",y);

    }
    else if(z > x && z > y)
    {       
        printf("Max number is %d",z);
    }
}

