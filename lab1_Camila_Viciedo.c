//********************************************************
// lab1.c
// Author: Camila Viciedo
// Class: COP 3223, Professor Parra
// Purpose: This program takes an input and
// Input:
//
// //********************************************************


// Header file for input output functions
#include <stdio.h>
 
// main function - where we will recieve and print users input
int main()  {
    
    int age;
    float height;
    char grade;
    
    // Collect inputs from user
    printf("How old are you?\n");
    scanf("%d", &age);
    
    printf("What is your height in meters? \n");
    scanf("%f", &height);
    
    printf("Lastly, what is your current grade in the class?");
    scanf("%c", &grade);
    
    // Print the users values in corresponding order
    printf("You are %d years old. \n")
    printf("You are %f meters tall. \n");
    printf("Your grade in this class is %c.\n");
    
    return 0;
}
