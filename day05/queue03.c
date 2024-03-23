/*
  연결자료구조를 이용한 큐
*/
#include <stdio.h>
#include <stdlib.h>
typedef struct NODE{
  int data;
  struct NODE* link;
}node;

typedef struct {
  node* rear;
  node* front;
}linkQ;

linkQ* createLinkQ();

void enQueue(linkQ*, int);

void printQ(linkQ*);

void deQueue(linkQ*);

void main()
{
  linkQ* q = createLinkQ();
  enQueue(q, 10);
  enQueue(q, 20);
  enQueue(q, 30);
  printQ(q);

  deQueue(q);
}

linkQ* createLinkQ()
{
  linkQ* lq = (linkQ*)malloc(sizeof(linkQ));
  if(lq == NULL) exit(1); // lq에서 메모리할당을 받는데, 메모리할당받지 못하면 나간다
  lq->front = NULL; // 왜-1이 아니냐면int값이 아니라 node*이기때문에 -1을 쓸 수 없고, 아무것도 >
  lq->rear = NULL;
  return lq;
}

void enQueue(linkQ* alq, int data)
{
  node* newNode = malloc(sizeof(node));
  newNode->data = data;
  newNode->link = NULL;

  if(alq->front == NULL){
    alq->front = newNode;
    alq->rear = newNode;
  }
  else{
    alq->rear->link = newNode;
    alq->rear = newNode;
  }
}

void printQ(linkQ* alq)
{
  node* curr = alq->front; // 출력함수에서는 값을 출력만 하는거고,  front값이 바뀌면  안 되기 [>
  while(curr != NULL){
    printf("%d\n", curr->data);
    curr = curr->link;
  }
}

void deQueue(linkQ* alq)
{
  node* renode = alq->front;
  alq->front = alq->front->link;
  printf("%d\n", renode->data);
  free(renode);
}
