#include <stdio.h>
#include <stdlib.h>

    
 
int main()
{
    int* a = malloc(5*sizeof(int));
    int* b = malloc(5*sizeof(int));
for(int i = 0; i<=4; i++)
{
    printf("enter number for element %d for first array and element %d for second array ",i,i);
    scanf("%d %d",(a+i),(b+i));
}
for(int i = 0; i<=4;i++)
{
printf("\nsum of array 1 and 2 is %d ",*(a+i) + *(b+i));

}
free(a);
free(b);
    return 0;
}