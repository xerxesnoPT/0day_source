#include <stdio.h>
#define MAX_TREE_SIZE 100
typedef char TElemType;

typedef struct BiTNode
{
  TElemType data;
  struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

//前序遍历算法
void PreOrderTraverse(BiTree T)
{
  if(T==NULL)
    return;
  printf("%c", T->data);
  PreOrderTraverse(T->lchild);
  PreOrderTraverse(T->rchild);
}

//中序遍历算法
void InOrderTraverse(BiTree T)
{
  if(T==NULL)
    return;
  InOrderTraverse(T->lchild);
  printf("%c", T->data);
  InOrderTraverse(T->rchild);
}

//后续遍历算法
void PostOrderTraverse(BiTree T)
{
  if(T==NULL)
    return;
  PostOrderTraverse(T->lchild);
  PostOrderTraverse(T->rchild);
  printf("%c", T->data);
}

void CreateBiTree(BiTree *T)
{
  TElemType ch;
  scanf("%c", &ch);
  if(ch=='#')
    *T=NULL;
  else {
    *T = (BiTree)malloc(sizeof(BiTNode));
    (*T)->data = ch;
    CreateBiTree(&(*T)->lchild);
    CreateBiTree(&(*T)->rchild);
  }
}
