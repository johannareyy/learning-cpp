#include <cstdio>

int main() {

    double price = 99.80;
    double tax = 0.08;

    double finalPrice = price * (1 + tax);

    printf("The final price is %.2f.\n", finalPrice); //.2 so duas casas do double
    printf("Age = %d", 35);

    return 0;
}