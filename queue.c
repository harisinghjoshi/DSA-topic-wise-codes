#include<stdio.h>
# define max 6
int rear=-1,front=-1;
int arr[max];
void enqueue();
void dequeue();
void display();
main(){
	
int choice;
	while(1){
	//	printf("1.push\n2.pop\n3.display\n4.exit\n.enter your choice\n");//
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
							printf("enter correct choice\n");
		}
		
		}
	}
	void enqueue(){
		int item;
		if(rear==max-1){
			printf("overflow\n");
			return;
		}
		printf("enter the item to be inserted\n");
		scanf("%d",&item);
		rear++;
		arr[rear]=item;
		}
		void dequeue(){
			if(front==-1||front>rear){
			printf("underflow\n");
			return;
			}
			if(front==rear){
			
			printf("%d is be deleted from queue\n",arr[front]);
			front=-1;
			rear=-1;
			return;
		}
	}
		void display(){
			int i;
			if(front=-1||front>rear){
				printf("underflow\n");
				return;
			}
			for(i=front;i<=rear;i++){
				printf("%d\n",arr[i]);
		}
	}
