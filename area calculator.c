#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    float base, height, radius, length, width, area;

    printf("Enter the shape you want to find the area of:\n");
    printf("1. Triangle\n2. Circle\n3. Square\n4. Rectangle\n5. Parallelogram\n6. Trapezium\n7. Ellipse\n8. Pentagon\n9. Hexagon\n10. Cube\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter the base and height of the triangle:\n");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("The area of the triangle is %.2f square units.", area);
            break;

        case 2:
            printf("Enter the radius of the circle:\n");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("The area of the circle is %.2f square units.", area);
            break;

        case 3:
            printf("Enter the length of one side of the square:\n");
            scanf("%f", &length);
            area = length * length;
            printf("The area of the square is %.2f square units.", area);
            break;

        case 4:
            printf("Enter the length and width of the rectangle:\n");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("The area of the rectangle is %.2f square units.", area);
            break;

        case 5:
            printf("Enter the base and height of the parallelogram:\n");
            scanf("%f %f", &base, &height);
            area = base * height;
            printf("The area of the parallelogram is %.2f square units.", area);
            break;

        case 6:
            printf("Enter the length of the parallel sides and the height of the trapezium:\n");
            scanf("%f %f %f", &base, &length, &height);
            area = 0.5 * (base + length) * height;
            printf("The area of the trapezium is %.2f square units.", area);
            break;

        case 7:
            printf("Enter the major axis and minor axis of the ellipse:\n");
            scanf("%f %f", &length, &width);
            area = 3.14 * length * width;
            printf("The area of the ellipse is %.2f square units.", area);
            break;

        case 8:
            printf("Enter the length of one side of the pentagon:\n");
            scanf("%f", &length);
            area = 0.25 * sqrt(5 * (5 + 2 * sqrt(5))) * length * length;
            printf("The area of the pentagon is %.2f square units.", area);
            break;

        case 9:
            printf("Enter the length of one side of the hexagon:\n");
            scanf("%f", &length);
            area = (3 * sqrt(3) / 2) * length * length;
            printf("The area of the hexagon is %.2f square units.", area);
            break;

        case 10:
            printf("Enter the length of one side of the cube:\n");
            scanf("%f", &length);
            area = 6 * length * length;
            printf("The area of the cube is %.2f square units.", area);
            break;

        default:
            printf("Invalid choice.");
    }

    return 0;
}


