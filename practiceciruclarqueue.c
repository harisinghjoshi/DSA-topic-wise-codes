#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 7
int rear=-1,front=-1;
int arr[max];
void insert();
void deletes();
void display();
main(){
	int choice;
		printf("1.insert\n2.deletes\n3.display\n4.exit\n");
	while(1){
	
		printf("enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				insert();
				break;
				case 2:
					deletes();
					break;
					case 3:
						display();
						break;
						case 4:
							exit(1);
							default:
								printf("enter the correct choice\n");
		}
	}
}
void insert(){
	int item;
	if(rear==-1&&front==-1){
		
		front=0;
		rear=0;
	}
	else if((rear+1)%max==front){
		printf("the queue is full now you cannot insert\n");
	}
	else{
		
		printf("enter the element you want to insert\n",item);
		scanf("%d",&item);
		arr[rear]=item;
		rear=(rear+1)%max;
	}
}
void deletes(){
	if((rear==-1&&front==-1)||front==rear+1){
		printf("the queue is empty\n");
	}
	else if(front==max-1){
		front=0;
	}
	else if(rear==front){
		printf("the deleted element is %d\n",arr[front]);
		front=-1;
		rear=-1;
	}
	else{
		printf("the deleted element is %d\n",arr[front]);
		front=(front+1)%max;
	}
}
void display(){
	int i=front;
	if((rear==-1&&front==-1)||front==rear+1){
		printf("the queue is empty\n");
}
else{
	while(i!=rear){
		printf("%d\t",arr[i]);
		i=(i+1)%max;
	}
}
}
