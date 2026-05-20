
#include <stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node*next;
};

// insert first
struct node* insert_first(struct node*head,int data) {
	struct node * new1 = (struct node*)malloc(sizeof(struct node));
	new1 -> data =data;
	new1 ->next =head;
	return new1;
}

//  insert mid

struct node * insert_mid(struct node*head, int data, int pos) {
	struct node * new1 = (struct node*)malloc(sizeof(struct node));
	struct node*prev =head;
	struct node* front;

	new1->data = data;
	front = head;
	int i =1;
	while(i<pos) {
		prev = front;
		front =front ->next;
		i++;
	}

	prev ->next = new1;
	new1->next = front;
	return head;

}

//insert last

struct node* insert_last(struct node*head, int data ) {
	struct node * new1 = (struct node*)malloc(sizeof(struct node));
	struct node*temp = head;
	new1 ->data =data;

	while(temp ->next != NULL) {
		temp = temp->next;
	}
	temp ->next  =new1;
	return head;
}

// deletion at first

struct node* delfirst(struct node*head) {
	struct node* temp = head;
	head = head ->next;
	free(temp);
	return head;
}

// deletion at mid

struct node* delmid(struct node*head,int index) {
	struct node* p =head;
	struct node* q =head ->next;

	for(int i =0; i <index-1 ; i++) {
		p =p->next;
		q =q->next;
	}

	p->next =q->next;
	free(q);

	return head;
}
void traverse(struct node*temp) {
	while(temp !=NULL) {
		printf("%d",temp->data);
		temp =temp->next;
	}
}

// Deletion at last

struct node* dellast(struct node* head) {

	struct node* p = head;
	struct node* q=head->next;

	while(q->next !=NULL) {
		p =p-> next;
		q =q-> next;
	}

	p ->next =NULL;
	free(q);
	return head;
}


int main()
{
	struct node*head=(struct node*)malloc(sizeof(struct node));
	struct node*second=(struct node*)malloc(sizeof(struct node));
	struct node*third=(struct node*)malloc(sizeof(struct node));

	head ->data =1 ;
	head ->next = second;
	second ->data =2 ;
	second ->next = third;
	third ->data =3 ;
	third ->next = NULL;
	head =insert_first(head,6);
	head =insert_mid(head,7,2);
	head =insert_last(head,8);
	head =delfirst(head);
	head =delmid(head,2);
	head =dellast(head);
	traverse(head);
	return 0;
}
