#include<stdio.h>

int input();
void input_array(int n,int a[n]);
void check_fact(int n,int a[n],int b[n]);
void output(int n,int b[n]);


int input()
{
    int n;
    printf("Enter the array size");
    scanf("%d",&n);
    return n;
}
void input_array(int n,int a[n])
{
    for(int i=0;i<n;++i)
    {
        printf("Enter the array elements");
        scanf("%d",a[i]);
    }
}
void check_fact(int n,int a[n],int b[n])
{
       int i, j, fact;
    for (i = 0; i < n; i++)
     {
        fact = 1;
        for (j = 1; j <= a[i]; j++) 
        {
            fact *= j;
        }
        b[i] = fact;
    }
}
void output(int n,int b[n])
{
    for(int i=0;i<n;i++)
    {
        printf("The factorial numbers in %d is %d",n,b[n]);
    }
}
int main()
{
    int n,a[n],b[n];
    n=input();
    input_array(n,a);
    check_fact(n,a,b);
    output(n,b);
    return 0;
}