#include <stdio.h>
#include <string.h>

void string_replace(int start, int end, const char string[40], const char new_text[40]) {
    char updated_string[40];
    int k = 0;

    // Copy part before start
    for (int i = 0; i < start && string[i] != '\0'; i++) {
        updated_string[k] = string[i];
        k++;
    }

    // Copy new_text
    for (int i = 0; new_text[i] != '\0'; i++) {
        updated_string[k] = new_text[i];
        k++;
    }

    // Copy part after end
    for (int i = end + 1; string[i] != '\0'; i++) {
        updated_string[k] = string[i];
        k++;
    }

    updated_string[k] = '\0'; // Null-terminate

    // For now, just print it
    printf("Updated string: %s\n", updated_string);
}   