/*
  오름차순으로 정렬해보시오
*/
#include <stdio.h>

int* bubsort(int *ary, int size) //
{
  for(int i = 0; i < size - 1; i++)
   {
     for(int j = 0; j <size -1; j++)
     {
       if (ary[j] > ary [j + 1])
       {
         int temp = ary[j];
         ary[j] = ary[j + 1];
         ary[j + 1] = temp;
       }
     }
   }
   return ary;
}

void main()
{
  int ary[] = {9, 4, 8, 15, 3, 7, 2, 1};
  int size = sizeof(ary)/sizeof(int); //(8*4)/(1*4) = 8 배열의 개수 구하는 식
  int temp;

  for(int i = 0; i < size; i++)
  {
    printf("%d", ary[i]);
  }
  printf("\n");

  int *sort_ary = bubsort(ary, size);

  for(int i = 0; i < size; i++)
  {
    printf("%d", sort_ary[i]);
  }
  printf("\n");
}
