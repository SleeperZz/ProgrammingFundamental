#include <stdio.h>

int main(){

int x;
int fac(int);
printf("Enter Numberz Let's Go : ");
scanf("%d",&x);
printf("The factorial of the number is %d", fac(x));

return 0;

}


    int fac(int i){

     if (i == 0)

      return 1;

      return i * fac(i - 1);

}