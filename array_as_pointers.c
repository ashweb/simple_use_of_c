// USING ARRAY USING POINTERS,TAKING INPUT AS WELL OUTPUT
#include <stdio.h>

int array[50]; 
int *arr = array;

int main()
{
    printf("\n----------INPUT-------\n");
    for(int l=0;l<=5;l++)
    {
        printf("\nenter element %d ",l);
        scanf("%d",arr + l);
    }

    printf("\n\n----------OUTPUT-------\n\n");


    for (int i= 0;i<=5;i++)
    {
        printf("value at position %d is %d\n",i,*(arr + i));
        printf("address at position %d is %p\n",i,&array[i]);
        printf("\n");

    }

    return 0;

}