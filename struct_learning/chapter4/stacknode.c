#define OK 1
#define ERROR 1
#define TRUE 1
#define FALSE 1
typedef int Status;
typedef int SElemType;

typedef struct StackNode
{
  SElemType data;
  struct StackNode *next;
}StackNode,*LinkStackPtr;

typedef struct LinkStack
{
  LinkStackPtr top;
  int count;
}LinkStack;

Status Push(LinkStack *L, SElemType e)
{
  LinkStackPtr s = (LinkStackPtr)malloc(sizeof(StackNode));
  s ->data = e;
  s -> next = L->top;
  L->top = s;
  L->count++;
  return OK;
}

Status Pop(LinkStack *L, SElemType *e)
{
  if (StackEmpty(*L))
    return ERROR;
  LinkStackPtr p;
  p = (L->top);
  *e = p->data;
  L->top = p->next;
  free(p);
  L ->count--;
  return OK;
}

Status StackEmpty(LinkStack *L)
{
  if (L->count <1)
    return OK;
  return FALSE;
}

