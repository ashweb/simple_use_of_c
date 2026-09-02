#include <stdio.h>

char string[50];
int vowel =0;
int consonent =0;

int main(){

    printf("enter a string ");
    fgets(string,sizeof(string),stdin);
    for(int i=0; string[i] != '\0'; i++)
    {
        if(string[i] >='A' && string[i]<='Z')
        {string[i] += 32;}
    
        if(string[i] == 'a'|| string[i] == 'e' || string[i] == 'i'|| string[i] == 'o'|| string[i] == 'u' )
        {vowel++;}
            else
            {consonent++;}
    }
    printf("\nNumbers of vowel is :%d\n",vowel);
    printf("Numbers of consonent is :%d",consonent);
    

return 0;


}