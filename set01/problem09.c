#include<stdio.h>
#include<math.h>
float input()
{
    float x;
    printf("enter the number");
    scanf("%f",&x);
    return x;

}
float square_root( float n)
{
    float x,small=0.00001,y;
    x=n;
    while(fabs(x-y)>small)
    {
        y=x;
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
    float n,sqrroot;
    n=input();
    sqrroot=square_root(n);
    output(n,sqrroot);
    return 0;
}