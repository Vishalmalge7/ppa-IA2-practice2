#include<stdio.h>
void input(float *b,float *h)
{

printf("enter the base and height values\n");
scanf("%f%f",b,h);  
}
void find_area(float b, float h,float *area)
{
  
  *area=0.5*b*h;
}
void output(float b, float h, float area)
{
  printf("area of traingle=%f\n",area);
}
void main()
{
float b,h,area;
input(&b,&h);
find_area(b,h,&area);
output(b,h,area);
}