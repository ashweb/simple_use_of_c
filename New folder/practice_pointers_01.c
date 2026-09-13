#include <stdio.h>

int array[50];
int* arr = array;
int sum;
int main()
{
for(int i = 0;i<=5;i++)
{
    printf("\nenter the element %d ",i);
    scanf("%d",arr + i);

        sum += *(arr + i);
    
}
printf("sum of all elements %d ",sum);





    return 0;
}