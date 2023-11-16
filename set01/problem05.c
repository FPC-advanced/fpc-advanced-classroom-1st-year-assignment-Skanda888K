
//Write a C program to compare three numbers using pass by value.
#include<stdio.h>
int input()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    return a;
}
int compare(int a, int b, int c)
{
    int lg;

    if(a>=b&&a>=c)
    {
        lg=a;
    }
     if(b>=a&&b>=c)
    {
        lg=b;
    }
    else 
    {
        lg=c;
           }
    
    
 
    
    return lg;



}
void output(int a, int b, int c, int lg)
{

    printf("The largest b/w %d,%d and %d is%d",a,b,c,lg);
 }


int main ()
{
    int x,y,z,largest;
    x=input();
    y=input();
    z=input();
    largest=compare(x,y,z);
    output(x,y,z,largest);
    return 0;
}