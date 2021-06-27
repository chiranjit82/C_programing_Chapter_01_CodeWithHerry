#include<stdio.h>

int main() {
    float principle = 1000, rateofInterest = 5, years = 1;
    float SimpleInterest = (principle * rateofInterest * years)/100;
    printf("The simple Interest is %f", SimpleInterest);
    return 0;
}