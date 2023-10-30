//Write a program to find Sum of composite number in an array of different numbers entered by the user
#include<stdio.h>
int input_array_size()
{
    int n;
    printf(" Enter the size of the array");
    scanf("%d",&n);
    return n;

}
void input_array(int n, int a[n])
{
    
    for(int i=0;i<n;i++)
    {
        printf("Enter the array elements");
        scanf("%d",a[i]);
    }
}
int sum_composite_numbers(int n, int a[n])
{
    int sum=0;
    for(int i=2;i<n;i++)
    {
        if(a[i]%i==0)
        {
        sum=sum+a[i];
        }
    }
    return sum;
}
void output(int sum)
{
    printf("The sum of given composite elements is %d",sum);
}
int main()
{
    int n,a[n],sum;
    n=input_array_size();
    input_array(n,a);
    sum=sum_composite_numbers(n,a);
    output(sum);
    return 0;
}
