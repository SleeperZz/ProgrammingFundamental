#include <stdio.h>

int main()
{
    float h,w,bmi;

    printf("Enter your Height(M) and Weight(Kg): ");
    scanf("%f %f", &h,&w);
    bmi = w / (h*h);

    bmi < 18.5?printf("Your bmi is %f you are underweight" ,bmi):bmi < 24.9? printf("Your bmi is %f you are normal", bmi):bmi < 29.9? printf("Your bmi is %f you are overweight", bmi):printf("Your bmi is %f you are obese",bmi);
 
    
    return 0;       

}
  