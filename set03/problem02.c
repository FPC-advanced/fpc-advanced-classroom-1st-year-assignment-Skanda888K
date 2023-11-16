// Write a program to find whether the given 3 points form a triangle.
#include<stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("ENTER THE VALES RESPECTIVELY x1,y1,x2,y2,x3,y3");
    scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    
    float a,b,c;
    
    a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    b=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    if(a+b>c&&b+c>a&&c+a>b)
    {
        return 1;
    }
    else {
          return 0;
    }

}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if(result==1)
    {
        printf("The points (%f,%f),(%f,%f)and (%f,%f) form a traingle",x1,y1,x2,y2,x3,y3); 
    }
    else{
        printf("The points (%f,%f),(%f,%f)and (%f,%f) do not form a traingle",x1,y1,x2,y2,x3,y3); 
    }
}
int main()
{
    float x1,y1,x2,y2,x3,y3;
    int result;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    result=is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
} 