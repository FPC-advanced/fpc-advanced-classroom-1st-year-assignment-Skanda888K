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
        printf("%d is not a composite number",n);

    }
    else{
        printf("%d is a composite number",n);

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
