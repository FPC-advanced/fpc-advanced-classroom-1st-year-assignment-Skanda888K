//Write a program to find nth number in fibonacci sequence.
#include<stdio.h>

int input()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    return n;
}

int find_fibo(int n)
{
    int a[n];
    a[0]=0,a[1]=1;

    int fibo;
    for(int i=2;i<=n;i++)
{
     a[i]=a[i-1]+a[i-2];
    fibo=a[i];
}
return fibo;
    }
void output(int n, int fibo)
{
    printf("%d",fibo);

}
int main()
{
    int n,fibo;
    n=input();
    fibo=find_fibo(n);
    output(n,fibo);
    return 0;
}