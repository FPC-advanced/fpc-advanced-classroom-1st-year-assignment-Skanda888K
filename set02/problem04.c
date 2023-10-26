//Write a program to find Sum of composite number in an array of different numbers entered by the user
#include<stdio.h>
int input_array_size()
{
    int n;
    printf(" Enter the size of the array");
    scanf("%d",&n);
    return 0;

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
    
}