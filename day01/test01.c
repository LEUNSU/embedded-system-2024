 /*
    배열입력으로 받기
 */
  #include <stdio.h>
  #define MAX 20
 
  void main()
  {
    int arr[MAX];
    int num;
 
    printf("Input Data>> ");
    scanf("%d", &num);
    printf("배열입력\n");
    for(int i =0; i<num; i++)
    {
      scanf("%d",&arr[i]);
    }
    //출력
    for(int i=0; i<num; i++)
    {
      printf("arr[%d]:%d\n",i, arr[i]);
    }
    //역순으로 출력
    printf("역순으로 출력\n");
    for(int i = num-1; i>=0; i--)
    {
      printf("arr[%d]:%d\n", i, arr[i]);
    }
  }
