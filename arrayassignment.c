#include <stdio.h>

int main() {
    int marks[10]; 
    int size;

    // Get array size from the user
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Get array values from the user
    printf("Enter %d values for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &marks[i]);
    }

    // Display the original array
    printf("\nThe original marks:");
    for (int i = 0; i < size; i++) {
        printf("%d,", marks[i]);
    }
    

   // Inserting a new value into the array
    int marksToInsert, insertPosition, insertIndex;
    printf("\nEnter the value to insert: ");
    scanf("%d", &marksToInsert);
    printf("Enter the position to insert at: ");
    scanf("%d", &insertPosition);
    
    insertIndex = insertPosition - 1;

    for (int i = size; i > insertIndex; i--) {
        marks[i] = marks[i - 1];
    }
    marks[insertIndex] = marksToInsert;
    
    // Display updated array
    printf("\nThe updated marks are: ");
    for (int i = 0; i < size + 1; i++) {
        printf("%d, ", marks[i]);
    }
    size++;

    // Remove a value from the array
    int valueToRemove;
    printf("\nEnter a value to remove from the array: ");
    scanf("%d", &valueToRemove);

    // Find and remove the value
    int removeIndex = -1;
    for (int i = 0; i < size; i++) {
        if (marks[i] == valueToRemove) {
            removeIndex = i;
            break;
        }
    }

    if (removeIndex != -1) {
        for (int i = removeIndex; i < size - 1; i++) {
            marks[i] = marks[i + 1];
        }
        size--;

        // Display updated array after removal
        printf("The updated marks after removal are:");
        for (int i = 0; i < size; i++) {
            printf("%d,", marks[i]);
        }
    } else {
        printf("Value not found in the array.");
    }

    // Sort the array
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (marks[i] > marks[j]) {
                int temp = marks[i];
                marks[i] = marks[j];
                marks[j] = temp;
            }
        }
    }

    // Display sorted array
    printf("\nThe sorted marks are:");
    for (int i = 0; i < size; i++) {
        printf("%d,", marks[i]);
    }

    return 0;
}
