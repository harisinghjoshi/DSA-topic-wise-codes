#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define max 6
int rear=-1,front=-1;
int arr[max];
void enqueue();
void dequeue();
void display();
main(){
	int choice;
	while(1){
		printf("1.insert\n2.delete\n3.display\n4.exit\n");
		printf("enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
			enqueue();
			break;
			case 2:
			dequeue();
			break;
			case 3:
			display();
			break;
			case 4:
			exit(1);
			default:
			printf("\nenter the right choice\n");
		}
	}
}

void enqueue(){
	int item;

if((front==0&&rear==max-1)||front==rear+1){

	printf("the queue is full now you cannot insert more elements\n");
	}
else if(rear==max-1){
	front==-1;
	rear==-1;
}
else{
	rear++;
	printf("enter the item to be inserted in the queue\n");
	scanf("%d",&item);
	arr[rear]=item;
	}
if(front==-1){
	front=0;
}

}
void dequeue(){
	if(front==-1&&rear==-1){
		printf("the queue is empty");
	}
	else if(front==rear){
		printf("the %d is deleted\n",arr[front]);
		
		rear=-1;
	}
	else if(front==max-1){
		front=0;
	}
	else{
		printf("%d is the deleted element from queue\n",arr[front]);
		front++;
	}
}
void display(){
	int i=front;
	int frontpose=front;
	int rearpose=rear;
	if(front==-1){
		printf("empty\n");
		return;
	
		while(i!=rear){
			printf("%d\t",arr[i]);
			i=(i+1)%max;
		}
		printf("%d\t",arr[rear]);
 }
	

