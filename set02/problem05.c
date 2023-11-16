// Program to find GCD of numbers
#include<stdio.h>


int input(){

    int x;
    printf("Enter the number to find the GCD");
    scanf("%d",&x);
    return x;
}

int find_gcd(int a,int b){
    int i=0;
    int gcd;
    for(i=1; i <= a && i <= b; i++)
    {
        
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    return gcd;

}

void output(int a,int b,int gcd){
    printf("The GCD of %d , %d = %d",a,b,gcd);
}

int main()
{
    int a,b,gcd;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);

}