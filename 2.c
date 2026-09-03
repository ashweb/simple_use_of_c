// addition by stuffs to which pointers are pointing-:
#include <stdio.h>

int a = 5,b=10;
int* ptr = &a,*ptr2 = &b;

int main()
{
    printf("addition %d & %d = %d ",a,b,*ptr + *ptr2);



    return 0;
}


