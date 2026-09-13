#include <stdio.h>

char array[50];
char* arr = array;
int vowel;
int main()
{
    printf("enter your string ");
    fgets(array,sizeof(array),stdin);
    for (int i = 0; i<sizeof(array); i++)
    {
        if(*(arr+i)>='A' && *(arr+i)<='Z')
        {*(arr + i) += 32;}

        if(*(arr + i)=='a'||*(arr + i)=='e'||*(arr + i)=='i'||*(arr + i)=='o'||*(arr + i)=='u')
        {
            vowel++;
        }
    }
    printf("vowels are = %d ",vowel);
    return 0;
}