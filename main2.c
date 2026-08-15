#include <stdio.h>

int main()
{
   int a,b,c;

   printf("enter your number a ");
   scanf("%d", &a);
   printf("enter your number b ");
   scanf("%d", &b);
printf("you chose %d", a); printf(" and %d\n", b);
printf("now choose menu 1 to 4\n\naddition\n\nsubtraction\n\nmultiplication\n\ndivision\n");
scanf("%d", &c);

   switch (c)
   {
    case 1: printf("addition of a and b is %d", a+b);
    break;
    case 2: printf("subtraction of a and b is %d", a-b);
    break;
    case 3: printf("multiplication of a and b is %d", a*b);
    break;
    case 4: printf("division of a and b is %d", a/b);
    break;

    default: printf("please choose number 1 to 4 only again");
    break;
   
    
   }


    return 0;
}