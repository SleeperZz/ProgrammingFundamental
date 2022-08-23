#include<stdio.h>
int main(){
  int n;
  printf("Enter number :");
  scanf("%d",&n);
  n=n-1;
  for(int y=n;y>=-n;y--)
  {
    for(int x=-n;x<=n;x++)
    {
      if(y>=x && y<=-x) printf("*");
      else if(y<=x && y>=-x) printf("*");
      else printf(" ");
    }
    printf("\n");
  }
}
