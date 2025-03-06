
#include <stdio.h>
#include <stdbool.h>

// Function prototypes
void setLength(int input, int* length);
void setWidth(int input, int* width);
int getPerimeter(int* length, int* width);
int getArea(int* length, int* width);
void printWelcomeMenu();
void printOptions();
int getIntInput(char message[]);

int main()
{
    int length = 1;  // Default length of the rectangle
    int width = 1;   // Default width of the rectangle
    bool continueProgram = true;  // Control variable for the main loop

    // Main program loop
    while (continueProgram) {
        printWelcomeMenu();  // Display the welcome menu
        printOptions();     // Display the available options

        // Get user input for menu selection
        int menuInput = getIntInput("Enter menu option number:");

        // Handle user input
        switch (menuInput)
        {
        case 1:
            // Display current length and width
            printf("\nThe Rectangle has a length of %i and a width of %i\n\n", length, width);
            break;
        case 2:
            // Update the length of the rectangle
            setLength(getIntInput("Please enter the length of the rectangle:"), &length);
            break;
        case 3:
            // Update the width of the rectangle
            setWidth(getIntInput("Please enter the width of the rectangle:"), &width);
            break;
        case 4:
            // Calculate and display the perimeter of the rectangle
            printf("\nThe Rectangle has a perimeter of %i\n\n", getPerimeter(&length, &width));
            break;
        case 5:
            // Calculate and display the area of the rectangle
            printf("\nThe Rectangle has an area of %i\n\n", getArea(&length, &width));
            break;
        case 6:
            // Exit the program
            continueProgram = false;
            break;
        default:
            // Handle invalid input
            printf("\nInvalid value entered.\n\n");
            break;
        }
    }

    return 0;  // End of program
}

// Function to get integer input from the user
int getIntInput(char message[])
{
    int input;
    int scannedValues;
    do {
        printf("\n%s\n", message);
        scannedValues = scanf_s("%i", &input);
        int buf;
        // Clear the input buffer
        while ((buf = getchar()) != '\n' && buf != EOF);
    } while (scannedValues != 1);  // Repeat until valid input is received
    return input;
}

// Function to set the length of the rectangle
void setLength(int input, int* length)
{
    if (input >= 1 && input <= 99) {
        *length = input;
    }
}

// Function to set the width of the rectangle
void setWidth(int input, int* width)
{
    if (input >= 1 && input <= 99) {
        *width = input;
    }
}

// Function to calculate the perimeter of the rectangle
int getPerimeter(int* length, int* width)
{
    return 2 * (*length + *width);
}

// Function to calculate the area of the rectangle
int getArea(int* length, int* width)
{
    return *length * *width;
}

// Function to display the welcome menu
void printWelcomeMenu()
{
    printf(" **********************\n");
    printf("**     Welcome to     **\n");
    printf("**    Assignment 02   **\n");
    printf(" **********************\n");
}

// Function to display the available options
void printOptions()
{
    printf("1. Get Rectangle Length & Width\n");
    printf("2. Change Rectangle Length\n");
    printf("3. Change Rectangle Width\n");
    printf("4. Get Rectangle Perimeter\n");
    printf("5. Get Rectangle Area\n");
    printf("6. Exit\n");
}

