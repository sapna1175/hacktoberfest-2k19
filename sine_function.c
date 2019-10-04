#include<stdio.h>                                                             
int main()
{
    float x,i,n;
    float c,d;
    printf("enter the value of n\n");
    scanf("%f",&n);
    printf("enter the angle in first quadrant(in degrees)\n");
    scanf("%f",&x);
    x = (3.14 * x) / 180;                                                       
    c = x;
    d = x;
    for (i=1;i<=n;i++)
    {
        c = ((-1) * c * x * x) / (i * 2 * ((2 * i) + 1));                       
        d = d + c; 
    }
    printf("the value of it's sine is %.1f\n",d);
}