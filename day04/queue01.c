#include <stdio.h>

#define Q_SIZE 10

int queue[Q_SIZE];
int front = -1;
int rear = -1;

void enqueue(int _data) // 배열이름은 주소라서 포인터로 받음
{
  if(rear >= Q_SIZE - 1){
    printf("queue overflow!\n");
    return;
  }
  queue[++rear] = _data;  // _rear = 0
}

int dequeue()
{
  if(front == rear){
     printf("queue underflow!\n");
     return -1;
  }
  return queue[++front];
}

void main()
{
//  int read = -1;
//  int front = -1;
//  int queue[Q_SIZE];

  enqueue(10);
  enqueue(20);
  enqueue(30);

  printf("%d\n", dequeue());  // 10
  printf("%d\n", dequeue());  // 20
}
