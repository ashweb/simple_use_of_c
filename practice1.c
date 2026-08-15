//COUNTING NUMBER OF STUFFS IN A STRING//


#include <stdio.h>


int vowels = 0, consonents= 0,spch = 0,spaces = 0,digits = 0;
char new[1000];
int main(){
    
  

        printf("enter your statements : ");
        fgets(new, sizeof(new),stdin);
    
    for (int i = 0 ; new[i] != '\0' && new[i] != '\n'; i++)
    {      
        if(new[i] >= 'A' && new[i] <= 'Z')
        {new[i] += 32;}
         
   
    if( new[i] == 'a' || new[i] == 'e' || new[i] == 'i' ||new[i] == 'o' || new[i] == 'u' )
    {vowels++;}
    else if( new[i]>= 'a' && new[i]<= 'z')
    {consonents++;}
    
    else if(new[i]>='0' && new[i]<= '9')
    {digits++;}
    
    else if(new[i] == ' ')
    {spaces++;}
    else
    {spch++;}
    }

    printf("#####--RESULTS--#####\nSPACES = %d\nSPECIAL CHARS = %d\nVOWELS = %d\nCONSONENTS = %d\nDIGITS = %d",spaces,spch,vowels,consonents,digits);}


    /*
 * ============================================================================
 *               C PROGRAMMING: STRING PROCESSING & LOGIC NOTES
 * ============================================================================
 *
 * 
 *   
 *   
 *
 * 1. STRING INPUT & `fgets()
 *    - `fgets(str, sizeof(str), stdin)` reads full lines safely, including spaces.
 *    - `fgets()` stores the Enter key press as a newline character (`'\n'`).
 *    - Use condition `str[i] != '\0' && str[i] != '\n'` in your loop so `'\n'` 
 *      isn't accidentally counted as a special character.
 *
 * 2. ASCII ARITHMETIC & CHARACTER TYPES
 *    - Characters are stored as ASCII numbers under the hood.
 *    - Uppercase to Lowercase: Add 32 (`'A'` is 65, `'a'` is 97 -> `ch += 32`).
 *    - Digit literals MUST use single quotes (`'0'` to `'9'`). 
 *      Using raw `0` to `9` checks ACTUAL NUMBER NOT ASCII VALUES AS FGETS STORES IN ASCII SO SHORT 
 *       ANS '0' = 53 (IN ASCII) WHILE 0 MEANS NUMBER DIGIT 0.
 *
 * 3. CONDITIONAL LOGIC & COMMON OPERATOR PITFALLS
 *    
 *    -  * USING separate `if` blocks causes characters to be evaluated and counted multiple times
 *         SO USE IF ELSE LADDER.
 *    - Specific Consonant Checking: Check `str[i] >= 'a' && str[i] <= 'z'` for consonants.
 *      A generic `else` will misclassify numbers, spaces, and punctuation as consonants.
 *
 * ============================================================================
 */
