#include<stdio.h>

int main() {
    int height, width;
    
    printf("What is the height of the rectangle: ");
    scanf("%d", &height);
    printf("What is the width of the rectangle: ");
    scanf("%d", &width);
    int area = height * width;
    printf("Area of the Rectangle is : %d", area);
    return 0;
}