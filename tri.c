#include<stdio.h>    
int main()
{    
int a,b,c;    
printf("Enter any three sides of a triangle:");    
scanf("%d%d%d",&a,&b,&c);     
if(a==b && b==c)
{    
printf("EQUILATERAL TRIANGLE",a);    
}    
else
if(a==b || b==c || c==a)    
printf("ISOSCELES TRIANGLE",b);
else
{
  printf("SCALENE TRIANGLE",c);
}    
     
return 0;  
}    
