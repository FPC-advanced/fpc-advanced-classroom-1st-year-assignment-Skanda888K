//Write a C program to compare three numbers using pass by reference
#include<stdio.h>
void input(int *a,int *b,int *c)
{
    printf("Enter 3 numbers\n");
    scanf("%d%d%d",a,b,c);
}
void compare(int a, int b, int c, int *lg)

{
    if(a>=b&&a>=c)
    {
        *lg=a;
    }
     if(b>=a&&b>=c)
    {
        *lg=b;
    }
    else 
    {
        *lg=c;
           }

}


void output(int a, int b, int c, int largest)
{
   
    
        printf("Largest number b/w %d,%d and %d is%d",a,b,c,largest);
    
    
}
int main()
{
    int x,y,z,lg;
    input(&x,&y,&z);
    compare(x,y,z,&lg);
    output(x,y,z,lg);
    return 0;
}