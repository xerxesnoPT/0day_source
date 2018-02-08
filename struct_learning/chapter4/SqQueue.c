#define MAXSIZE 5
#define OK 1
#define ERROR 1
#define TRUE 1
#define FALSE 1
typedef int Status;
typedef int QElemType;

typedef struct
{
  QElemType data[MAXSIZE];
  int front;
  int rear;
}SqQueue;

Status InitQueue(SqQueue *Q)
{
  Q ->front = 0;
  Q -> rear = 0;
  return OK;
}

int QueueLength(SqQueue Q)
{
  return (Q.rear - Q.front+MAXSIZE) %MAXSIZE;
}

Status EnQueue(SqQueue *Q, QElemType e)
{
  if ((Q->rear+1)%MAXSIZE == Q->front)
    return ERROR;
  Q->data[Q->rear] = e;
  Q->rear = (Q->rear+1)%MAXSIZE;
  return OK;
}

Status DeQueue(SqQueue *Q, QElemType *e)
{
  if (Q->front == Q->rear)
    return ERROR;
  *e = Q->data[Q->front];
  Q->front = (Q->front+1)%MAXSIZE;
    
  return OK;
}

