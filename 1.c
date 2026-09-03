//BAD DESIGN CODE EG

#include <stdio.h>
#include <stdlib.h>


int main()
{

int* a = malloc(5*sizeof(int));


  *a     = 1;
  *(a+1) = 2;
  *(a+2) = 3;
  *(a+3) = 4;
  *(a+4) = 50;

  for(int i =0;i<=4;i++)
  {
        printf("\nelement %d is %d ",i,*(a+i));
  }


free(a);
        return 0;
}