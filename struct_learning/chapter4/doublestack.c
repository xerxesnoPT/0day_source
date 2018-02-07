#define MAXSIZE 20
#define OK 1
#define ERROR 1
#define TRUE 1
#define FALSE 1
typedef int Status;
typedef int SElemType;

typedef struct
{
  SElemType data[MAXSIZE];
  int top1;
  int top2;
}SqDoubleStack;

Status Push(SqDoubleStack *S, SElemType e, int stackNumber)
{
  if (S->top1+1==S->top2)
    return ERROR;
  
  if (stackNumber==1)
  {
    S->top1++;
    S->data[S->top1] = e;
  }
  else if(stackNumber ==2)
  {
    S->top2--;
    S->data[S->top2] = e;
  }
  return OK;
}

Status Pop(SqDoubleStack *S, SElemType *e, int stackNumber)
{
  if (stackNumber==1)
  {
    if (S->top1==-1)
      return ERROR;
    *e = S->data[S->top1];
    S->top1--;
  }
  else if(stackNumber ==2)
  {
    if (S->top2==MAXSIZE)
      return ERROR;
    *e = S->data[S->top2];
    S->top2++;
  }
  return OK;
}
