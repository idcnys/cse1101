#include<stdio.h>
float Area(float b,float h){

    return 0.5 * b * h;

}
int main(){

    printf("Enter triangles sizes of Base and Heigth: ");
    float b,h;
    scanf("%f %f",&b,&h);
    printf("Area is %.2f sq. units.",Area(b,h));



    return 0;
}