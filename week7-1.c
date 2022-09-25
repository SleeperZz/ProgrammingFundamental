#include <stdio.h>
int x,y;

int main(){ 
printf("Enter two Numberz to swap: ");
scanf("%d %d",&x,&y);
    x =  x + y ;
    y =  x - y ;
    x =  x - y ;
printf("%d %d",x,y);
return 0; 
}



