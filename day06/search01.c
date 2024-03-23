/*
  순차탐색
*/
#include <stdio.h>

int lSearch(int *ary, int size, int data)
{
  for(int i = 0; i < size; i++)
  {
    if(ary[i] == data)
    return i;
  }
  return -1;
}

void main()
{
  int ary[] = {3, 5, 2, 4, 9, 8, 1};
  int ridx;
  int size = sizeof(ary)/sizeof(int);

  ridx = lSearch(ary, size, 9);

  if(ridx == -1)
  {
    printf("찾는 원소가 없습니다\n");
  }
  else
  {
    printf("찾는 인덱스 : %d\n", ridx);
  }
}
