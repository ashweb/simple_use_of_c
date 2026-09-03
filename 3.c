//swapping two numbers with the help of pointers;
//by calling swap fn-:

#include <stdio.h>
int a=5,b=6,temp;
int*c = &a;
int*d = &b;

void swap (int a, int b);

int main()
{
printf("before swap\na = %d  b = %d",*c,*d);
swap(a,b);
printf("\nafter swap \na = %d  b = %d",*c,*d);


    return 0;
}

void swap (int a, int b)
{
    temp = *c;
    *c = *d;
    *d = temp;
}

