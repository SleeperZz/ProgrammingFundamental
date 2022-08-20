#include <stdio.h>
int main()
{
    float h ,w ,bmi ;
    
    printf("Enter Weight(Kg) : ");
    scanf("%f", &w);
    
    printf("Enter Height(M) : ");
    scanf("%f", &h);
    
   
    bmi = w / (h*h);
       
    if ( bmi <= 18.5)
    {
        printf("Your BMI is %f and you're below the standard",bmi);
    }
    else if (18.5 <= bmi <= 24.9)
    {
        printf("Your BMI is %f and you're in the standard",bmi);
    }
     else if (25.0 <= bmi <= 29.9)
    {
        printf("Your BMI is %f and you're in the standard",bmi);
    }
    else{
        printf("Your BMI is %f and you're above the standard",bmi);
    }


    return 0;
}