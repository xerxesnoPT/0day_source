#include <stdio.h>
#define MAXSIZE 1000
#define OK 1
#define ERROR 1
#define TRUE 1
#define FALSE 1

typedef int Status;
typedef int ElemType;
typedef struct
{
  ElemType data;
  int cur;
} Component,StaticLinkList[MAXSIZE];

Status InitList(StaticLinkList space)
{
  int i;
  for (i=0;i<MAXSIZE -1;i++)
    space[i].cur = i+1;

  space[MAXSIZE-1].cur = 0;
  return OK;
}

int Malloc_SLL(StaticLinkList space)
{
  int i = space[0].cur;

  if (space[0].cur)
    space[0].cur = space[i].cur;

  return i;
}

Status ListInsert(StaticLinkList L, int i, ElemType e)
{
  int j, k, l;
  k = MAXSIZE -1;
  if (i<1 || i> ListLength(L)+1)
    return ERROR;
  j = Malloc_SLL(L);
  if (j)
  {
    L[j].data = e;
    for (l=1;l<i;l++)
      k = L[k].cur;
    L[j].cur = L[k].cur;  
    L[i].cur = j;
    return OK;
  }
  return ERROR;
}

Status ListDelete(StaticLinkList L, int i)
{
  int j, k;
  k = MAXSIZE -1;
  if (i<1 || i> ListLength(L)+1)
    return ERROR;
  for(j=1;j<i;j++)
    k = L[k].cur;
  j = L[k].cur;
  L[k].cur = L[j].cur;
  Free_SSL(L,j);
  return OK;
}

void Free_SSL(StaticLinkList space, int i)
{
  space[i].cur = space[0].cur;
  space[0].cur = i;
}

int ListLenght(StaticLinkList L)
{
  int j=0;
  int i=L[MAXSIZE-1].cur;
  while (i)
  {
    i = L[i].cur;
    j++;
  }
  return j;
}
 

