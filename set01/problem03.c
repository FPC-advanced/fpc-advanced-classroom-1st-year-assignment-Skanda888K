//Write a C program to add two numbers using pass by value
#include<stdio.h>
int input()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    return a;
}
int add(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;
}
void output(int a, int b, int sum)
{
    printf("The sum of %d and %d is %d",a,b,sum);

}
int main()
{
    int x,y,z;
    x=input();
    y=input();
    z=add(x,y);
    output(x,y,z);
    return 0;    
}