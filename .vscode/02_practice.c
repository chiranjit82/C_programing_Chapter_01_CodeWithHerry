#include<stdio.h>

int main() {
    float radius = 4;
    float pi = 3.14;
    float area = pi * radius * radius;
    printf("The radius of the circle is %f \n", area);
    float height = 5;
    float volume = pi * radius * radius * height;
    printf("The volume of the circle is %f \n", volume);
    return 0;
}