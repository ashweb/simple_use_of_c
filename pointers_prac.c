#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
#include <ctype.h>

int main()
{
   
    char *string = malloc(100 * sizeof(char));

    printf("enter a string s: ");
    scanf("%s", string);

    
    char *t = malloc((strlen(string) + 1) * sizeof(char));

    printf("enter a string t: ");
    scanf("%s", t);

    t[0] = toupper(string[0]);

    printf("\nstring s is: %s", string);
    printf("\nstring t is: %s\n", t);

  
    free(string);
    free(t);

    return 0;
}