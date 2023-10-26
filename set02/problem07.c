//Write a program to find the area of a triangle


typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle()
{
    Triangle t;
    printf("Enter the base of triangle");
    scanf("%f",&t.base);
    printf("Enter the altitude of triangle");
    scanf("%f",&t.altitude);
    return t;
}
void find_area(Triangle *t)
{
    Triangle a,b;
    t->area=0.5*(t->base*t->altitude);
}
void output(Triangle t)
{
    printf("The area triangle is %.2f",t.area);
}
int main()
{
    Triangle t;
    t=input_triangle();

    find_area(&t);
    output(t);
    return 0;
}
