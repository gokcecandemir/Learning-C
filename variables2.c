#include <stdio.h>
#include <stdbool.h>

int main() {

    /* In C, there is no strings
     string -> series of characters (such as a name)
    Strings are stored as character arrays.
    */ 
    char name[] = "Gokce"; // char -> 1 byte
    char greeting[] = "Sup";
    char email[] = "email11@gmail.com";

// Note -> String = char array + '\0' 

    printf("Hi I'm %s\n", name);
    printf("%s! I'm Gökce\n", greeting);
    printf("Your email is %s\n", email);

// Watch out -> "11" is a string (char array), NOT a numeric value.

/* Bools are binary. They're either true or false. True -> 1 False -> 0 and they're 1 byte
*/ 
    bool is_online = 1;
    bool isOnline = true; // Which means true corresponds as 1
    bool isOfline = false; // True false makes more sense (instead of 1-0)
    bool is_ofline = 0;

    printf("%d\n", isOnline);
    printf("%d\n", isOfline);

    if(isOnline){
        printf("You're online"); 
       }
    else{
        printf("You're offline");
    }
    
    return 0;
}