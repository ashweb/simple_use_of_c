// WITHOUT USING C-TYPE LIBRARY
#include <stdio.h>

    char string[50];

int main(){

    printf("enter your string ");
    fgets(string, sizeof(string),stdin);

    for(int i=0; string[i] != '\0' && string[i] != '\n'; i++){
        if(string[i] >= 'A' && string[i] <= 'Z')
            {string[i] +=  32;}
            else if(string[i] >= 'a' && string[i] <= 'z')
             {string[i] -=  32;}
             else if (string[i]==' ')
             {}
             else
             {printf("\nwrite string correctly");
            break;}
    }

printf("\nyour string is: %s", string);

    return 0;
}
//WITH USING C-TYPE LIBRARY