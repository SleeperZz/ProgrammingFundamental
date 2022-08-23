#include<stdio.h>
#include<conio.h>
int Fusion(int y){
    int  sum;
    sum = 0; 
    while(y != 0){
        sum +=(y%10);
        y /= 10;
    }
    while(sum > 9)
        sum = Fusion(sum);
    return(sum);    
}

int main()
{
    int x;
    printf("Enter Number : ");
    scanf("%d",&x);
    printf("%d",Fusion(x));
}
