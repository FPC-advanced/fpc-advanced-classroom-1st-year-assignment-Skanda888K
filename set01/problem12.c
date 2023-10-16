//Write a C program to find the sum of _n_ complex numbers

#include<stdio.h>
struct _complex
{
    float real;
    float imaginary;

};
typedef struct _complex Complex;
int get_n()
{
int n;
printf("Enter the array size");
scanf("%d",&n);
return n;
}
Complex input_complex()
{
    Complex c;
    printf("Enter the real part");
    scanf("%f",c.real);
    printf("Enter the imaginary part");
    scanf("%f",c.imaginary);

}
void input_n_complex(int n, Complex c[n])
{
    int i;
  for( i=0;i<n;i++)
  printf("Enter the complex number %d:\n",i+1);
  c[i]=input_complex();
}
Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
    }
Complex add_n_complex(int n, Complex c[n])
{
    Complex sum={0,0};
    for(int i=0;i<n;i++)
    {
        sum =add (sum, c[i]);
    }
    return sum;
}
void output(int n, Complex c[n], Complex result)
{
   printf("Sum of %d complex numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%.2f + %.2fi ", c[i].real, c[i].imaginary);
        if (i < n - 1) {
            printf("+ ");
        }
    }
    printf("= %.2f + %.2fi\n", result.real, result.imaginary);
}

int main()
{
    int n;
    Complex c[n],result,a,b;
    n=get_n();
    
   input_n_complex(n,c);
  
   add_n_complex( n,  c);
output( n,  c, result);
return 0;

}