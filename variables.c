#include <stdio.h>
// variable -> a reusable container for a value
int main() {
// integer -> 4 bytes
    int age = 18;
    int year = 2026;
    int quantitity = 8;

    printf("I'm %d years old\n", age);
    printf("We're in %d\n", year);
    printf("You've got %d items\n", quantitity);

// float -> 4 bytes

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
    
    // double : Stores approximately 15–16 significant digit -> 8 bytes

    double pi = 3.14159265358979;
    double e = 2.71828183;

    printf("The value of pi is %lf\n", pi);
    printf("Hey it's pi take my number %.8lf\n", pi);

    // You could use %f too

    printf("Here is the value of e -> %f\n", e);
    

    // char (character)

    char initial_name = 'G';
    char currency = '$';
    char symbol = '?';
    
    printf("The symbol is %c\n", symbol);
    printf("The currency is : %c\n", currency);
    printf("My initial name is %c\n", initial_name);
    
    return 0;
}
