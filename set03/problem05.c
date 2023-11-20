// Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.
#include<stdio.h>
#include<math.h>
int input_array_size()
{
    int n;
    printf("Enter the range of array");
    scanf("%d",&n);
    return n;
}

void init_array(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
      a[i]=i;
    }
    
}
void erotosthenes_sieve(int n, int a[n])
{
 
}
void output(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
      printf("%d",a[n]);
    }
}
int main()
{
    int n;
    n=input_array_size();
    int a[n];
     init_array( n,a);
     output(n,a);
 return 0;

}
