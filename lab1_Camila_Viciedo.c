//********************************************************
// lab1.c
// Author: Camila Viciedo
// Class: COP 3223, Professor Parra
// Purpose: This program takes users input with scan function for the following varaibles -- age, height, grade -- and uses print function to return the values. 
// Input: Users age, height, and grade. 
// Output: Message displaying user responses. 
// //********************************************************


// Header file for input output functions
#include <stdio.h>
 
// main function - where we will recieve and print users input
int main()  {
    
    // Variables for function 
    int age;
    float height;
    char grade;
    
    // Collects input from users 
    printf("How old are you?\n");
    scanf("%d", &age);
    
    printf("What is your height in meters? \n");
    scanf("%f", &height);
    
    printf("Lastly, what is your current grade in the class? \n");
    scanf(" %c", &grade);
    
    // Prints the users values in corresponding order
    printf("You are %d years old. \n", age);
    printf("You are %.2f meters tall. \n", height);
    printf("Your grade in this class is %c.\n", grade);
    
    return 0;
}
