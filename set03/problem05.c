// Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.
#include<stdio.h>

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
  for(int i=2;i<n;i++)
  {
    if((i%2!=0)&&(i%3!=0)&&(i%5!=0)&&(i%7!=0))
    {
        i=a[n];
    }
  }
}
void output(int n, int a[n])
{
    for(int i=0;i<n;i++)
    {
        printf("The number of prime numbers between 2 to %d is %d",n,a[n]);
    }
}
int main()
{
    int n,a[n];
    n=input_array_size();
     init_array( n,a);
 output(n, a);
 return 0;

}
