#include <stdio.h>

int main() {
// integer 
    int age = 18;
    int year = 2026;
    int quantitity = 8;

    printf("I'm %d years old\n", age);
    printf("We're in %d\n", year);
    printf("You've got %d items\n", quantitity);

// float 

    float gpa = 3.5;
    float temperature = 88.8;
    float price = 18.8;

    printf("My gpa is %f\n", gpa);
    printf("The temperature is %f\n", temperature);
    printf("The price you pay %f\n", price);

    // note : float: 6–7 significant digits

    printf("My gpa is %.1f\n", gpa);
    printf("The temperature is %.1f\n", temperature);
    printf("The price you pay %.1f\n", price);
    
    // double : Stores approximately 15–16 significant digit

    double pi = 3.141592653589793;
    

    return 0;
}
