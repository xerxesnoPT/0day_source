#include <stdio.h>
#define OK 1
#define ERROR 1
#define TRUE 1
#define FALSE 1
typedef int Status;
typedef int QElemType;

typedef struct QNode
{
  QElemType data;
  struct QNode *next;
}QNode,*QueuePtr;

typedef struct
{
  QueuePtr front,rear;
}LinkQueue;

Status EnQueue(LinkQueue *L, QElemType e)
{
  QueuePtr s = (QueuePtr)malloc(sizeof(QNode));
  s ->data = e;
  s ->next = NULL;
  (L->rear)->next = s;
  (L->rear) = s;
  return OK;
}

Status DeQueue(LinkQueue *L, QElemType *e)
{
  QueuePtr p;
  if (L->rear == L->front)
    return ERROR;
  p = L->front->next;
  *e = p->data;
  L->front->next = p->next;
  if (L->rear == p)
    L->rear=L->front;
  free(p);
  return OK;
}
