#include <stdio.h>
#include <stdlib.h>

void main()
{
//char msg[20] = "File Test!!!";
  char name[20] = "LEE EUNSU";
  int age = 26;

  FILE* fp;   // 파일포인터
//fp = fopen("test.txt", "w");// 파일 오픈/ "w" : 쓰기"r" : 읽기
  fp = fopen("info.txt", "w");

  if(fp == NULL) {
    fprintf(stderr, "Error"); // 파일입출력에서 사용하는 출력함수
    exit(1);
  }
  fprintf(fp, "%s", name);      // 파일로 출력
  fprintf(fp, "%d", age);
  printf("%s", name);
  printf("%d", age);

  fclose(fp);
}
