#include<stdio.h>
#include<conio.h>

int main(){
int x;
int  Fac(int);
printf("Enter Numberz to make into factorial: ");
scanf("%d",&x);
printf("%s",Fac(x));
return 0 ;
}


int Fac(int x){
    int i,a = 1;
    for(i = 1;i <= x ;i++){
            a =a*i; 
        }

    printf("The factorial of %d is: %d",x,a); 
  
}