//Harshit patil 25070521104



#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2, realPart, imagPart;

    // Input prompt
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate discriminant
    discriminant = b * b - 4 * a * c;

    // Check and print based on nature of roots
    if (discriminant > 0) {
        // Real and different roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2f and root2 = %.2f\n", root1, root2);
    } 
    else if (discriminant == 0) {
        // Real and equal roots
        root1 = -b / (2 * a);
        printf("root1 = root2 = %.2f\n", root1);
    } 
    else {
        // Complex roots
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi\n",
               realPart, imagPart, realPart, imagPart);
    }

    return 0;
}

