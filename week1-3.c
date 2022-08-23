#include<stdio.h>
float BMI(float w, float h) {
   return w/(h*h);
   
}
int main() {
   float w,h ;
   printf("Enter Weight(Kg) and Height(M): ");
   scanf("%f%f", &w,&h); 
   float bmi = BMI(w,h);
   for(float x = 1;x <= bmi; x += 0.000001){
    if( x > 30 && x == bmi){
        printf("Your bmi is %f you are obese",bmi);
        break;
    }
    else if(x > 25.0 && x == bmi ){
        printf("Your bmi is %f you are Overweight", bmi); 
        break;
    }
    else if( x > 18.6 && x == bmi ){
        printf("Your bmi is %f you are normal", bmi);
        break;    
    }
    else if( bmi > 0 && x == bmi ){
        printf("Your bmi is %f you are underweight" ,bmi); 
        break;
    }
  
   }
   
   





   return 0;
}