 #include <stdio.h>
 
  void main()
  {
    int a;
    int b;
    printf("두수를 입력하세요: ");
    scanf("%d, %d",&a, &b);
 
    if( a >b)
    {
      printf("더 큰수는 %d ",a);
    }
    else
    {
      printf("더큰 수는 %d",b);
    }
  }
