//Write a program to find sum of two fractions
#include<stdio.h>
#include<math.h>
void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

void input(int *num1, int *den1, int *num2, int *den2)
{
   printf("Enter the numerators and denominators");
   scanf("%d%d%d%d",num1,den1,num2,den2);


}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
   *res_num;

}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
    printf("%d/%d+%d/%d",num1,den1,num2,den2);
}
int main()
{
    int num1,den1,num2,den2,res_num,res_den;
    input(&num1,&den1, &num2,&den2);
     add(num1,den1,num2,den2,&res_num,&res_den);
     output(num1,den1,num2,den2,res_num,res_den);
     return 0;
}