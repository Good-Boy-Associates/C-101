#include <stdio.h>
#include <math.h>

void solveQuadraticEquation(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("Root 1: %lf\n", root1);
        printf("Root 2: %lf\n", root2);
    } 
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        
        printf("Root: %lf\n", root);
    } 
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        
        printf("Root 1: %lf + %lfi\n", realPart, imaginaryPart);
        printf("Root 2: %lf - %lfi\n", realPart, imaginaryPart);
    }
}

int main() {
    double a, b, c;
    
    printf("Enter the coefficients of the quadratic equation (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    solveQuadraticEquation(a, b, c);
    
    return 0;
}
