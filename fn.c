// using functions to return a value


#include <stdio.h>
int a,b;
int sum(int a, int b);

int main()
{
    printf("enter two NO. ");
    
    scanf("%d %d",&a,&b);
     printf("sum is. %d",sum(a,b));


}
int sum(int a, int b)
{
    
return a+b;


}