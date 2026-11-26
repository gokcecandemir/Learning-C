#include <stdio.h>

int main() {

    int x = 0;  // Safe initialization
    //int y;      // Declared, not initialized
    /* be sure to not use them before assing
    them a value */ 
    
    int age = 0;
    char grade = '\0'; // null terminator
    
    /*A null terminator (\0) is an invisible character that marks the 
    end of a string in memory so the computer knows where to stop reading.*/
    
    char name[30] = "";
    float gpa = 0.0f; // Number 0 is fine anyway
     
    // Note -> f it it's a float. f isn't needed for a double

    scanf("%d, &age");

    return 0;
}


   
