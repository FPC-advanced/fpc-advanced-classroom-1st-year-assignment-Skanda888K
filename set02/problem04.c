//04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include<stdio.h>
int input_array_size()
{
int n;
printf("Enter the range of the array");
scanf("%d",&n);
return n;
}
void input_array(int n, int a[]) 
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the array elements");
        scanf("%d",&a[i]);

    }
}
int is_composite(int b)
{
    if(b<=1)
    {        
        return 0;
    }
   for(int i=2;i<b;i++)
   {
    if(b%i==0);
    return 1;
   }
}
int sum_composite_numbers(int n, int a[n])
{
int sum=0;
for(int i=0;i<n;i++)
{
    if( is_composite(a[i]))
    {
        sum=sum+a[i];
    }
    return sum;
}
 
}
void output(int sum)
{
    printf("The sum of all composite numbers are %d",sum); 
}
int main()
{
    int sum,n,a[n];
    n=input_array_size();
    input_array(n,a);
    sum=sum_composite_numbers(n,a);
output(sum);

}