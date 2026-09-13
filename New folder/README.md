# simple_use_of_c
COUNTING HOW MUCH DIFFERENT TYPES OF CHARS LIKE SPECIAL CHARS, VOWEL,CONSONENT,NUMBERS ETC ARE THERE USING C BASIC
<br>
<br>
 1. STRING INPUT & `fgets()`
 *    - `fgets(str, sizeof(str), stdin)` reads full lines safely, including spaces.
 *    - `fgets()` stores the Enter key press as a newline character (`'\n'`).
 *    - Use condition `str[i] != '\0' && str[i] != '\n'` in your loop so `'\n'` 
 *      isn't accidentally counted as a special character.
 *
 * 2. Ascii ARITHMETIC & CHARACTER TYPES
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
