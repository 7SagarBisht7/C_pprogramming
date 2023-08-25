#include <stdio.h>

int main() {
    int choice;
    float s1, s2, s3, base, height, radius, length, width, perimeter;

    printf("Perimeter Calculator\n");
    printf("1. Triangle\n");
    printf("2. Rectangle\n");
    printf("3. Circle\n");
    printf("4. Square\n");
    printf("5. Parallelogram\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter the length of side 1: ");
            scanf("%f", &s1);
            printf("Enter the length of side 2: ");
            scanf("%f", &s2);
            printf("Enter the length of side 3: ");
            scanf("%f", &s3);
            perimeter = s1 + s2 + s3;
            printf("The perimeter of the triangle is: %f\n", perimeter);
            break;
        case 2:
            printf("Enter the length of the base: ");
            scanf("%f", &base);
            printf("Enter the length of the height: ");
            scanf("%f", &height);
            perimeter = 2 * (base + height);
            printf("The perimeter of the rectangle is: %f\n", perimeter);
            break;
        case 3:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            perimeter = 2 * 3.14 * radius;
            printf("The perimeter of the circle is: %f\n", perimeter);
            break;
        case 4:
            printf("Enter the length of a side: ");
            scanf("%f", &length);
            perimeter = 4 * length;
            printf("The perimeter of the square is: %f\n", perimeter);
            break;
        case 5:
            printf("Enter the length of the base: ");
            scanf("%f", &base);
            printf("Enter the length of the height: ");
            scanf("%f", &height);
            perimeter = 2 * (base + height);
            printf("The perimeter of the parallelogram is: %f\n", perimeter);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
