//Write a C program to find the sum of 2 complex numbers

#include<stdio.h>
struct _complex
{
    float real;
    float imaginary;
    
};
typedef struct _complex Complex;

Complex input_complex()
{
    Complex c;
    printf("Enter the real part");
    scanf("%f",&c.real);
    printf("Enter the imaginary part");
    scanf("%f",&c.imaginary);
    return c;
}
Complex add_complex(Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
    }
void output(Complex a, Complex b, Complex sum)
{
    printf("(%f+%fi)+(%f+%fi)=(%f+%fi) ",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);

}
int main()
{
    Complex a,b;
    Complex sum;
    printf("Enter the 1st complex number\n");
    a=input_complex();
    printf("Enter the 2nd complex number\n");
    b=input_complex();
    sum=add_complex(a,b);
    output(a,b,sum);
    return 0;
}
