/* use to find madx value in given input array 
with the help of pointers and memory allocation*/
#include <stdio.h>
#include <stdlib.h>
int max = 0;
int main()
{
    int* arr = malloc(5*sizeof(int));

    for(int i = 0;i<=4;i++)
    {
        printf("enter element %d ",i);
        scanf("%d", (arr+i));
    }
    max = *arr;
    for(int i = 0;i<=4;i++)
        {
        if(*(arr + i)>max)
        {
            max = *(arr + i);
        }
    }
    printf("max %d ",max);

free(arr);

    return 0;
}