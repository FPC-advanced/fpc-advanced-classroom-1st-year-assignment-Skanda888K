//3. Write a program to check if the given number is prime
#include<stdio.h>
int input_number()
{
    int n;
    printf("Enter the number to find prime number");
    scanf("%d",&n);
    return n;

}
int is_prime(int n)
{
    int c=0;
    for(int i=1;i<n;i++ )
    {
        if(n%i==0)
        {
            c++;
        }
    }
}