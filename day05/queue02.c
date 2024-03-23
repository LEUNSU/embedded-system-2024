/*
순차자료구조를  이용한 큐
*/
#include <stdio.h>
#include <stdlib.h>
#define QSIZE 10

typedef struct{
  int front;
  int rear;
  char queue[QSIZE];
}queue;

queue* create();

void enqueue(queue* pq, char);

char dequeue(queue*);

void printQueue(queue*);

void main()
{
  queue* qa = create();
  enqueue(qa, 'A');
  enqueue(qa, 'B');
  enqueue(qa, 'C');
  printQueue(qa);

  printf("dequeue: %c\n", dequeue(qa));
  printf("dequeue: %c\n", dequeue(qa));

  printQueue(qa);

  printf("dequeue: %c\n", dequeue(qa));
  printf("dequeue: %c\n", dequeue(qa));
}

queue* create() // 동적할당
{
/*
  queue* queue = (queue*)malloc(sizeof(queue));
  queue->front = queue->rear = -1;
  return queue;
*/
  queue* queue = malloc(sizeof(queue));
  if(queue == NULL) exit(1);
  queue->front = -1;
  queue->rear = -1;
  return queue;
}

void enqueue(queue* pq, char data)
{
  if(pq->rear == QSIZE -1){
    printf("queue overflow\n");
    return;
  }
  pq->queue[++(pq->rear)] = data;
//  printf("%c\n", pq->queue[(pq->rear)]);
}
char dequeue(queue* pq)
{
  if(pq->front == pq->rear){
    printf("queue underflow\n");
    return 'r';
  }
  return pq->queue[++(pq->front)];
}

void printQueue(queue* pq)
{
  for(int i = pq->front+1; i <= pq->rear; i++){
    printf("%c\n", pq->queue[i]);
  }
} 
