#include <stdio.h>

int array[50];
int* arr = array;
int max;

int main()
{
    
    for(int i=0;i<=5;i++)
    {
        printf("enter element %d ",i);
        scanf("%d",arr + i);
    }
 max = *arr;


    for(int j=0;j<=5;j++)
    {
        if(*(array+j)>max)
        {max = *(array + j);}
    }
printf("\n max value is %d",max);



    return 0;
}