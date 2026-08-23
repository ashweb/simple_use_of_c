#include <stdio.h>
#include <string.h>

char string[50];
int yes = 1; 
int length;

int main() {

    printf("Enter your string: ");
    fgets(string, sizeof(string), stdin);

    for(int i = 0; string[i] != '\0'; i++) {
        if(string[i] == '\n') {
            string[i] = '\0';
            break; 
        }
    }

    length = strlen(string);

    for(int i = 0; i < length / 2; i++) {
        // Look for a MISMATCH
        if(string[i] != string[length - 1 - i]) {
            yes = 0; // Found a mismatch, so it's NOT a palindrome
            break;   // Stop checking immediately
        }
    }

    
    if(yes == 1) {
        printf("\nIt is a palindrome\n");
    } else {
        printf("\nIt is not a palindrome\n");
    }

    return 0;
}