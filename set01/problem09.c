#include<stdio.h>

int input()
{
    int x;
    printf("enter the number");
    scanf("%f",&x);
    return x;

}
int square_root(int n)
{
    float x,small=0; 
    x=n;
    while((x*x-n)>small)
    {
        x=0.5*(x+n/x);
    }
    return x;
}
void output(float n,float sqrroot)
{
    printf("the square root of %f is %f",n,sqrroot);
}
int main()
{
    int n;float sqrroot;
    n=input();
    sqrroot=square_root(n);
    output(n,sqrroot);
    return 0;
}