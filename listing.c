#include <stdio.h>
#include <stdlib.h>

  typedef struct node
    {
        int number;
        struct node* next;
    }node;

int main()
{
                        node*list = NULL;

                         list  = malloc(sizeof(node));
if(list == NULL)
{
    return 1;
} 
                         list->number=1;
                         list->next=NULL;
                         
                         node*n = NULL;
                         n = malloc(sizeof(node));                         
if(n == NULL)
{
    free(n);
    return 2;
} 
            n->number = 2;
            n->next = list;
            list = n;
            
                        n= NULL;
                        n = malloc(sizeof(node));
                        if(n == NULL)
{
    free(n);
    return 3;
}

   
            n->number = 3;
            n->next = list;
            list  = n;
           


for(node*ptr = list; ptr != NULL; ptr = ptr-> next)
{
    printf("\n%i",ptr->number);
}
node* ptr = list;
    while (ptr != NULL)
    {
        node* tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
return 0;
}