#include<stdio.h>
#include<math.h>
#include<conio.h>


float area(float a,float b, float c){
   float s =(a+b+c)/2 ;
   //half perimeter = s

   return sqrt(s*(s-a)*(s-b)*(s-c));
   //if we know the sides of a triangle then its the formula for calculating the area
}

float length(int x1,int y1,int x2,int y2){
  

   return sqrt(pow((x1 - x2 ),2)+ pow((y1- y2),2));
   //Distance between two points in cartesian plane
}


int main(){
    printf("Calculate the area using three coordinates\n");
   int x1,x2,x3,y1,y2,y3=0;
   printf("Enter First Coords:\n");
   scanf("%d%d",&x1,&y1);
   printf("Second Coords:\n");
   scanf("%d%d",&x2,&y2);
   printf("Third Coords:\n");
   scanf("%d%d",&x3,&y3);

   float a = length(x1,y1,x2,y2);
   float b= length(x1,y1,x3,y3);
   float c = length(x2,y2,x3,y3);

   

   printf("The area of that triangle is %.3f",area(a,b,c));
   getch();





   return 0;
}