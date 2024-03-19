#include <stdio.h>
#include <stdlib.h>

// 노드 구조체 정의
typedef struct NODE{
  int data;
  struct NODE* next;
}node;

// 헤드노드를 가지고 있는 구조체 정의
typedef struct{
  node *head;
}headNode;

// 헤드 노드 생성함수
headNode* createHeadNode(void)
{
   headNode* head = (headNode*)malloc(sizeof(headNode));
   if(head == NULL){
   printf("null");
  }
    return head;
}

void pre_addNode(headNode* pnode, int data) // 전위 삽입
{
  node* newNode = (node*)malloc(sizeof(node));
  //if(newNode == NULL) return -1;
  if(newNode != NULL){
  newNode->data = data;
  newNode->next = pnode->head;
  pnode->head = newNode;
  }
}

void rear_addNode(headNode* pnode, int data)    // 후위 삽입
{
  node* newNode = (node*)malloc(sizeof(node));
  if(newNode != NULL){
   newNode->data = data;
   newNode->next = NULL;
   if(pnode->head == NULL) pnode->head = newNode;
   else{
    node* curr = phead->head;
     while(curr->next != NULL)
     {
     curr = curr -> next;
     }
    curr-> next = newNode;
   }
  }
}

void showNode(headNode* pnode)    // 노드  출력함수
{
  node* curr = pnode->head;
  while(curr != NULL)
  {
    printf("%d\n", curr->data);
    curr = curr->next;
  }
}

void allFreeNode(headNode* pnode) // 전체 메모리 해제
{
  node* curr = pnode->head;
  while(curr != NULL)
  {
    node* temp = curr;
    curr = curr->next;
    free(temp);
  }
  free(pnode);
}

node* searchNode(헤더노드, 데이터)  // 노드검색
{
  node*
}

void main()
{
  //node* head = (node*)malloc(sizeof(node));
  headNode* newhead = createHeadNode();

  pre_addNode(newhead, 10); // 첫번째 노드로 삽입
  pre_addNode(newhead, 20);
  pre_addNode(newhead, 30);
  pre_addNode(newhead, 40);
  pre_addNode(newhead, 50);


  rear_addNode(newhead, 10);
  rear_addNode(newhead, 20);
  rear_addNode(newhead, 30);
  rear_addNode(newhead, 40);
  rear_addNode(newhead, 50);

  showNode(newhead);
  allFreeNode(newhead);
//  node* curr = head->next;
//  while(curr != NULL){
//    printf("%d\n", curr->data);
//    curr = curr->next;
//  }

//  curr = head->next;
/*    while(curr != NULL){
    head->next = curr->next;
    free(curr);
    curr = head->next;
  }
  printf("%d, %d\n", head->next, curr);
  free(head);
    allFreeNode(head);
  */
}
