// gcc append_to_file -o append_to_file
// ./append_to_file

#include <stdio.h>
#include <stdlib.h>


int main() {
    FILE *file; // File pointer
    char inputString[100]; // Buffer to hold user input

    // Step 3: Open the file in append mode
    file = fopen("output.txt", "a"); // "a" mode opens the file for appending
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit if file cannot be opened
    }

    // Step 4: Get user input
    printf("Enter a string to append to the file: ");
    fgets(inputString, sizeof(inputString), stdin); // Read a line of input

    // Step 5: Write the string to the file
    fprintf(file, "%s", inputString); // Append the string to the file

    // Step 6: Close the file
    fclose(file);

    printf("String appended successfully!\n");
    return 0;
}

