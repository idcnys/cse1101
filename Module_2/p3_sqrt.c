// 3. Problem Statement: Write a program that finds the roots of a quadratic equation,
// ax2+bx+c=0. The constants a,b and c should be input from keyboard. Hint: use sqrt()
// function by writing header file 
#include<stdio.h>
#include<math.h>

int main(){
    float a,b,c;
    printf("Enter values of ax2+bx+c (space seperated respectively): ");
    scanf("%f %f %f",&a,&b,&c);
    //x = (-b ± √(b² - 4ac)) / 2a
    float det = b*b - (4*a*c);
    if(det>=0.0){
         float x1 = (-b + sqrt(det))/(2*a);
    float x2 = (-b - sqrt(det))/(2*a);
    printf("x1: %.2f x2: %.2f\n",x1,x2);

    }else{
        printf("real roots are unavailable\n");
    }

   
    


    return 0;
}