//8. Write a program to find the permeter of a polygon



#include <stdio.h>
#include <math.h>

typedef struct point 
{
    float x, y;
}   Point;

typedef struct polygon 
{
    int sides;
    Point p[100];
    float perimeter;
} 
Polygon;

int input_n() 
{
    int sides;
    printf("Enter the number of sides of the polygon: ");
    scanf("%d", &sides);
    return sides;
}

Point input_point(char *prompt_msg) 
{
    Point p;
    printf("%s", prompt_msg);
    scanf("%f %f", &p.x, &p.y);
    return p;
}

int input_polygon(Polygon *poly) {
    poly->sides = input_n();
    printf("Enter the coordinates of the polygon vertices:\n");
    
    for (int i = 0; i < poly->sides; i++) {
        printf("Enter the coordinates of point %d (x,y):\n", i + 1);
        poly->p[i] = input_point("");
    }

    return poly->sides;
}

float find_distance(Point a, Point b) {
    float dx = b.x - a.x;
    float dy = b.y - a.y;
    return sqrt(dx * dx + dy * dy);
}


void find_perimeter(Polygon *poly) {
    poly->perimeter = 0.0;

    for (int i = 0; i < poly->sides; i++) {
        int next = (i + 1) % poly->sides;  
        poly->perimeter += find_distance(poly->p[i], poly->p[next]);
    }
}

void output(Polygon poly) {
    printf("The perimeter of the polygon is %.6f\n", poly.perimeter);
}

int main() {
    Polygon myPolygon;
    input_polygon(&myPolygon);
    find_perimeter(&myPolygon);
    output(myPolygon);

    return 0;
}