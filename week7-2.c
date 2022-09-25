#include <stdio.h>
int x,y;
int swap(int *x ,int *y  );

int main(){ 
printf("Enter two Numberz to swap: ");
scanf("%d %d",&x,&y);
swap(&x,&y);
printf("%d %d",x,y);
return 0; 
}

int swap(int *x ,int *y){
    *x=*x^*y;
    *y=*x^*y;
    *x=*x^*y;
}


