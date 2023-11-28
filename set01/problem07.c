#include<stdio.h>
int input()
{
    int n;
    printf("Enter the range pf numers ");
    scanf("%d",&n);
    return n;

}
int sum_n_nos(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
      sum+=i;
    }
    return sum;
}
void output(int n, int sum)
{
    printf("The sum natural numbers upto %d is %d",n,sum);
}
int main()
{
    int n,sum;
    n=input();
    sum=sum_n_nos(n);
    output(n,sum);
    return 0;
}