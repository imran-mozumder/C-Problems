/* Develop a C program that calculates the area of different geometric shapes such as circle, rectangle, and triangle. Prompt the user to choose a shape, input the required parameters (like radius for circle, length and width for rectangle, base and height for triangle), then calculate and display the area. You can use the following formulas:
● Circle: 𝐴𝑟𝑒𝑎 = π * 𝑟𝑎𝑑𝑖𝑢𝑠2
● Rectangle: 𝐴𝑟𝑒𝑎 = 𝑙𝑒𝑛𝑔𝑡h * 𝑤𝑖𝑑𝑡h
● Triangle: 𝐴𝑟𝑒𝑎 = 12 * 𝑏𝑎𝑠𝑒 * h𝑒𝑖𝑔h𝑡
*/
#include <stdio.h>
#define PI 3.14159

int main() {
    int choice;
    float radius, length, width, base, height, area;

    printf("Choose a shape-\n");
    printf("1.Circle\n");
    printf("2.Rectangle\n");
    printf("3.Triangle\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            area = PI * radius * radius;
            printf("Area of circle: %.2f\n", area);
            break;
        case 2:
            printf("Enter the length and width of the rectangle: ");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("Area of rectangle: %.2f\n", area);
            break;
        case 3:
            printf("Enter the base and height of the triangle: ");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of triangle: %.2f\n", area);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
