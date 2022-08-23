#include<stdio.h>
int main(){
    int n;
     printf("Enter Number: ");
     scanf("%d", &n);

    n > 0? printf("%d is positive number" ,n ): n<0? printf("%d is negative number", n):printf("This is 0");
 
    
    return 0;       

}