*
  이진 탐색
*/
#include <stdio.h>

int bSearch(int *ary, int size, int target)
{
  int first = 0;
  int last = size;
  int middle = 0;

  while(first <= last)
  {
    middle = (first + last) /2;
    if(target == ary[middle])
    {
     return middle; //
    }
    else
    {
      if(target > ary[middle]) first = middle + 1;
      else last = middle - 1;
    }
  }
  return -1;
}

void main()
{
  int ary[] = {1, 2, 3, 4, 5, 6, 7};
  int ridx;
  int size = sizeof(ary)/ sizeof(int);

  ridx = bSearch(ary, size, 6);

  if(ridx == -1)
  {
    printf("찾는 원소가 없습니다\n");
  }
  else
  {
     printf("찾는 인덱스 : %d\n", ridx);
  }

} 
