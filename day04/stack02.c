/*
  연결리스트로 구현
*/
#include <stdio.h>

#define STACK_SZ 10
typedef struct STACK{
  int buf[STACK_SZ];  // 스택담는
  int top;  // Index번호
}stack;

void push(stack*, int data);

int pop(stack*);

void main()
{
  stack s;
  //stack* s;
  s.top = -1; // 맨 처음 인덱스0
  push(&s, 10);
  push(&s, 20);
  push(&s, 30);

  printf("%d\n", pop(&s));
  printf("%d\n", pop(&s));
  printf("%d\n", pop(&s));
  printf("%d\n", pop(&s));
}

int isFull(stack* pstk)
{
  if(pstk->top == STACK_SZ -1){
  return 1;
  }
  return 0;
}

int isEmpty(stack* pstk)
{
  if(pstk->top== -1){
  return 1;
  }
  return 0;
}

void push(stack* pstk, int num)
{
  if(isFull(pstk)){
    printf("stack overflow\n");
  }
  pstk->buf[++(pstk->top)] = num;   // 데이터 삽입
  printf("%d\n", pstk->buf[pstk->top]); // top 0 삽입데이터부터 출력
}

int pop(stack* pstk)
{
  if(isEmpty(pstk)){
    printf("stack underflow\n");
    return -1;
  }
  return  pstk->buf[(pstk->top)--]; // 가장 상위에 있는 데이터를num 에 [>
}
