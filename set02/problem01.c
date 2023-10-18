// Write a program to find the area of a triangle.
#include<Stdio.h>

void input(float *base, float *height)
{
    printf("Enter the base of triangle");
    scanf("%f",base);
    printf("Enter the height of triangle");
    scanf("%f",height);
}
void find_area(float base , float height, float *area)
{
    *area=base*height;

}
void output(float base, float height, float area)
{
    printf("area of triangle of height %f and base %f is %f",height,base,area);

}
int main()
{
    float b,h,a;
    input(&b, &h);
     find_area(b ,h, &a);
     output( b, h,a);
     return 0;
}