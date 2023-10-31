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
        printf("ENter the array elements");
        scanf("%d",&t[i]);
        t[n]=input_triangle();
    }
}
