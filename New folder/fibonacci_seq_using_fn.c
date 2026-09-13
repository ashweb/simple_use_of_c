#include <stdio.h>

int fibo();
int num2;

int main(){


fibo();

    return 0;
}
int fibo()git
{
    int first =0, second = 1,num;

    printf("enter number of elements ");
    scanf("%d",&num2);
    for(int i=0;i<num2;i++)
{
     if(i<=1)
    {
        num = i;
    }
    else
    {
        num = first + second;
        first = second;
        second = num;
    }
    printf("%d ",num);
}
        
}