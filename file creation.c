#include <stdio.h>

int main() {
    FILE *fpointer;
    char text[] = "This is some text that will be written to the file.\n";
    char appendText[] = "Additional text that will be appended to the file.\n";

    // Write mode - creates a new file or overwrites existing file
    fpointer = fopen("example.txt", "w");
    if (fpointer== NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    // Write text to the file
    fputs(text, fpointer);
    
    // Close the file
    fclose(fpointer);

    // Append mode - appends to existing file
    fpointer = fopen("example.txt", "a");
    if (fpointer == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    // Append additional text to the file
    fputs(appendText, fpointer);
    
    // Close the file
    fclose(fpointer);

    printf("Text has been written and appended to the file successfully!\n");
    
    return 0;
}
