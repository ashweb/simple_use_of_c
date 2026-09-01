#include <stdio.h>

int main(){
  
    int grade;
    printf("enter your marks\n");
    scanf("%d", &grade);
    
 switch(grade)

 {case 0 ... 10:
 printf("you got F grade");
     break;

     case 11 ... 50:
 printf("you got C grade");
     break;
     

     case 51 ... 85:
 printf("you got B grade");
     break;
     

     case 86 ... 100:
 printf("you got A grade");
     break;
     
default : (printf("type number between 1 to 100 only"));

    return 0;
};}