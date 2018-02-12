#define MAX_TREE_SIZE 100
typedef int TElemType;

// 父节点表示法
typedef struct PTNode
{
  TElemType data;
  int parent;
} PTNode;

typedef struct
{
  PTNode nodes[MAX_TREE_SIZE];
  int r, n;
} PTree;


// 子节点表示法

typedef struct CTNode
{
  int child;
  struct CTNode *next;
} *ChildPtr;

typedef struct
{
  TElemType data;
  ChildPtr firstchild;
} CTBox;

typedef struct
{
  CTBox nodes[MAX_TREE_SIZE];
  int r,n;
} CTree;

// 树的孩子兄弟表示法结构定义
typedef struct CSNode
{
  TElemType data;
  struct CSNode *firstchild, *rightsib;
} CSNode, *CSTree;
