#include <stdio.h>
#include<math.h>

int main(){
    
    double radius = 0.0;
    double area = 0.0;
    const double PI = 3.14;
    double surfacearea = 0.0;
    double volume = 0.0;

    printf("Enter the value of radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfacearea = 4 * PI * pow(radius, 2);
    volume = (4.0/3.0) * PI * pow(radius, 3);

    printf("Area: %.2lf\n", area);
    printf("SurfaceArea: %.2lf\n", surfacearea);
    printf("Volume: %.2lf", volume);


    return 0;
}