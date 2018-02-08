
int Index(String S, String T, int pos)
{
  int n, m,i;
  String sub;
  if (pos>0)
  {
    n = StrLength(S);
    m = StrLength(T);
    i = pos;
    while(i<=n-m+1)
    {
      SubString(sub,S,i,m);
      if(StrCompare(sub,T) !=0)
        ++i;
      else 
        return i;
      
    }
  }
  return 0;
}



int Index_one(String S, String T,int pos)
{
  int i = pos;
  int j = 1;
  /* 字符串S跟T的长度保存在数组开始处*/
  while(i <=S[0] && j <=T[0])
  {
    if (S[i] == T[j])
    {
     ++i;
     ++j;
    }
    else {
      i = i-j+2;
      j = 1;
    }
  }
}
