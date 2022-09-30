#include<Stdio.h>
# define max 6
int top=-1;
int stack[max];
void push();
void pop();
void display();
main(){
	int choice;
	printf("1.push\n2.pop\n3.display\n4.exit\n");
	while(1){
		
		printf(".enter your choice\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();
				break;
				case 2: 
				pop();
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
void push(){
	int pushed_item;
	if(top==max-1){
		printf("overflow\n");
		return ;
	}
	printf("enter pushed item\n");
	scanf("%d",&pushed_item);
	top++;
	stack[top]=pushed_item;
	}

void pop(){
	if(top==-1){
		printf("underflow\n");
		return ;
		
	}
	printf("poped item is %d\n",stack[top]);
	top=top-1;
}
void display(){
	int i;
if(top==-1){
		printf("underflow\n");
		return ;
	}
	printf("elements of arry\n");
	for(i=top;i>=0;i--){
		printf("%d\t",stack[i]);
	}
}
