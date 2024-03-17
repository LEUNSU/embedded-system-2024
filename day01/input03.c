  #include <stdio.h>
 
  void main()
  {
    char name[10];
    int age;
    printf("이름을 입력하세요: ");
    scanf("%s", name);  // 배열은 주소이기때문에
                        // 주소연산자 사용x
    printf("나이를 입력하세요: ");
    scanf("%d", &age);  // 변수는 주소로 저장
    printf("이름:%s, 나이 : %d\n", name, age);
 
  }
