#include <stdio.h>

int main(){
    int num,r,col,s;

    printf("Enter number of rows: ");
    scanf("%d",&num);

    for(r = 1; r <= num; r++)
    {
        for(s = 1; s <= (num-r); s++)
        {
            printf(" ");
        }
        for(col = 1;col <=(2*r-1); col++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
