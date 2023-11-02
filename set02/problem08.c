//Write a program to find the triangle with smallest area in n given triangles.
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n()
{
    int n;
    printf("Enter the bumber of triangle");
    scanf("%d",&n);
    return n;
}
Triangle input_triangle()
{
    Triangle x;
    printf("Enter the base part");
    scanf("%f",&x.area);
    printf("Enter the altitude part");
    scanf("%f",&x.altitude);
    return x;
}
void input_n_triangles(int n, Triangle t[n])
{
    int i;
    for(i=0;i<n;i++){
       printf("Enter the values ");
        t[i]=input_triangle();
    }
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void find_n_areas(int n, Triangle t[n])
{
    int i;
    for(i=0;i<n;i++)
    {
        find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
    Triangle smallest=t[0];

    
for(int i=0;i<n;i++)
{
    if(t[i].area<smallest.area)
    {
        smallest=t[i];
    }
}
return smallest;
}
void output(int n, Triangle t[n], Triangle smallest)

{
     printf("The smallest triangle out of triangles with base and height ");
    for (int i = 0; i < n; i++) {
        printf("(%f,%f)", t[i].base, t[i].altitude);
        if (i < n - 1) {
            printf(" , ");
        }
    }
    printf(" is the triangle having base %f, height %f, and area %f\n",
           smallest.base, smallest.altitude, smallest.area);
}

   int main() {
    int n = input_n();
    Triangle t[n];
    input_n_triangles(n, t);
    find_n_areas(n, t);
    Triangle smallest = find_smallest_triangle(n,t);
    output(n, t, smallest);

    return 0;
}

