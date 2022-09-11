#include <stdio.h>
int main(){
    int num,c = 1 ,i;
    printf("Enter numberz of pyramid: ");
    scanf("%d",&num);

    while(c <= num)
    {
       
    i = 0;
    while(i <= (num - c)){
        printf(" ");
        i++;
    }
    while(i < (2*c-1))
    {
        printf("*");
        i++;
    }
    printf("\n");
    c++;
   }
   return 0;
}