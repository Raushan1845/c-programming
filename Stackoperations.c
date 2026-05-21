
#include <stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
int stack[MAXSIZE],top = -1;

void push() {
	if(top == MAXSIZE -1) {
		printf("stack overflow \n");
	}

	else {
		int n;
		printf("enter the element to push :\n");
		scanf("%d",&n);
		top++;
		stack[top] =n ;
	}
}

void pop() {
	if(top ==-1) {
		printf("stack is empty :\n");
	}
	else {
		int n;
		n = stack[top];
		top--;
		printf("the popped element is :%d \n",n);
	}
}

void display() {
	if(top ==-1) {
		printf("stack is empty :\n");
	}
	else {

		printf("elemente of stack : \n");
		for(int i =top ; i>=0 ; i--) {
			printf("%d\n",stack[i]);
		}
	}
}
int main()
{
	int choice ;
	do {
		// printf("STACK \n");
		printf("Enter the operation you want to perform : \n");
		printf("1. Push \t 2.POP \t 3. Display\n");

		scanf("%d",&choice);

		switch(choice) {
		case 1 :
			push();
			break;

		case 2 :
			pop();
			break;

		case 3 :
			display();
			break;

		default :
			printf("invalid choice \n");
		}
	}
	while(choice !=4);

	return 0;
}
