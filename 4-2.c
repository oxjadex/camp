// 함수를 활용해 node 동적으로 생성하기
#include<stdio.h>
#include<stdlib.h>
typedef int element;
//Node 구조체 정의
typedef struct Node {
	element data;
	struct Node *next;
}Node;

Node *createNode( element data );
void printAll( Node *ptr );

int main(){
    Node *head, *node1,*node2, *node3 ;
	  node1 = createNode(12);//heard, node1, node2 노드 생성
		node2 = createNode(99);
		node3 = createNode(37);
	  node1->next = node2;//각 노드->next를 저장
		node2->next = node3;
		node3->next = NULL;
		head = node1;
	  printAll(head);//head 노드를 출력
}
Node* createNode( element data){
    Node* new;//노드 크기 동적 할당
			new = (Node*)malloc(sizeof(Node));//노드의 데이터 저장
			new->data = data;//노드->next 참조를 NULL저장
			new->next = NULL;
			return new;
}
void printAll( Node* ptr ){
    while( ptr ){
				if (ptr->next){//next 노드가 있으면 ->출력
          printf("%d->", ptr->data);//노드의 데이터 출력 
        	ptr = ptr -> next;//다음노드의 주소로 저장
				}
			  else {
					printf("%d", ptr->data);//노드의 데이터 출력
					return;//프린트 종료
				}
    }
}