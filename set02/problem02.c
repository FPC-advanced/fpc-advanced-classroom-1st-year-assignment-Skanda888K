//Write a program to find if a triangle is scalene.
#include<stdio.h>
int input_side()
{
    int a;
    printf("Enter the side of the traingle");
    scanf("%d",&a);
    return a;

}
int check_scalene(int a, int b, int c)
{
    int isscalene;
    if(a!=b&&b!=c&&c!=a)
    {
        return isscalene=1;
    }
   else 
   {
    return isscalene=0;
   }
   
   
}
void output(int a, int b, int c, int isscalene)
{
    if(isscalene){

    
    printf("The triangle with side %d %d %dis a scalene triangle ",a,b,c);
    
    }
    else
    {

        printf("It is not a scalene triangle");
    }
}
int main()
{
    int a,b,c,isscalene;
a=input_side();
b=input_side();
c=input_side();
isscalene=check_scalene(a,b,c);
output(a,b,c,isscalene);
return 0;
}