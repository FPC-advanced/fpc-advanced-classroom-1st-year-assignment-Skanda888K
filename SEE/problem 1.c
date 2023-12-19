#include<stdio.h>

int input();
int find_fact(int n);
void output(int n, int result);

int input()
{ 
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    return n;
}

int find_fact(int n)
{
    int result, a=1;

    for(int i=1;i<=n;i++)
    {
        a*=i;
    }
    if(a==n)
    {
        result=1;
    }
    else{
        result=0;
    }
    return result;
}

void output(int n, int result)
{
    if(result==1)
    {
        printf("The number %d is a factorial", n);
    }
    else{
        printf("The number %d is not a factorial", n);
    }
}

int main()
{
    int n,result;
    n=input();
    result=find_fact(n);
    output(n,result);
    return 0;
}
