#include<stdio.h>
int input_number()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    return n;

}
int is_composite(int n)
{
    int c;
    for(int i=0;i<=n;i++)
    {
        if(n%i==0)
        c=c+1;
    }
    return c;
}
void output(int n, int result)
{
    if(result==2)
    {
        printf("Its not a consecutive number");

    }
    else{
        printf("Its a consecutive number");

    }
}
int main()
{
    int n,result;
    n=input_number();
    result=is_composite(n);
    output(n,result);
    return 0;
    }
