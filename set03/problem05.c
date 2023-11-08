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
       i=a[i];
    }
    
}
void erotosthenes_sieve(int n, int a[n])
{
  for(int i=2;i<n;i++)
  {
    if((a[i]%2!=0)&&(a[i]%3!=0)&&(a[i]%5!=0)&&(a[i]%7!=0))
    {
       a[n]=a[i];
    }
  }
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
