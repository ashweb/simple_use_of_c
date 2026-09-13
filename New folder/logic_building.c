#include <stdio.h>

int array [50];
int largest,slargest =-99999;

int main(){
    for(int i=0; i<5; i++)
    {
        printf("enter a number :");
        scanf("%d",&array[i]);
    }
   largest = array[0];
    for(int i=0 ; i<5 ; i++)
    {
        if(array[i]>largest)
        {
            slargest=largest;
        largest = array[i];
        
        }
        else if(array[i]>slargest && array[i] != largest)
        {slargest = array[i];}
    }
printf("largest %d",largest);
printf("\nsecond largest %d",slargest);

    return 0;
}