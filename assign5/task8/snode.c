#include <stdio.h>
#include "snode.h"
#include <string.h>
#include <stdlib.h>

struct snode *snode_create(void *d, size_t data_size) 
{
 //TODO: implement snode_create, change the prototype to
 //match with header file
 //return node;
 struct snode* pt = (struct snode *)malloc(sizeof(struct snode));
 pt->data = malloc(data_size);
 strcpy(pt->data, d);;

 pt->next = NULL;
 return pt;
  
}
void snode_destroy(struct snode * pt) 
{
  free(pt->data);
  free(pt);

 //TODO: implement snode_destroy
 
};