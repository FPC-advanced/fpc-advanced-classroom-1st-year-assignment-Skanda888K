#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("Enter a number\n");
  scanf("%f",&n);
  return n;
}
float square_root(float n)
{
 float sqqroot;
 sqqroot=sqrt(n);
 return sqqroot;
}
void output(float n, float sqqroot)
{
   printf("The sqrt of %f is %f",n,sqqroot);
}
int main()
{
    float n,sqqroot;
    n=input();
    sqqroot=square_root( n);
    output(n, sqqroot);
    return 0;
}