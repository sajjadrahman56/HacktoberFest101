#include<stdio.h>
#include<conio.h>
void push();
void pop();
void show();
int stack[100],i,num,j,top=-1,choice=0;
void main(){
	printf("enter the number of elements in the stack");
	scanf("%d",&n);
	printf("**********stack operations using array*********");
	printf("\n      \n");
	while(choice!=4){
		printf("enter the choice.........\n");
		printf("\n1.push \n2.pop \n 3.show\n4.exit");
		printf("\n enter your choice");
		scanf("%d",&choice);
		switch (choice){
			case 1:
			    push();
				break;
			case 2:
			     pop();
			    break;
			case 3:
				show();
				break;
			case 4:
				break;
			default:
				printf("enter the valid choice");	
				break;	
			}
	}

	
	
}
void push(){
	int value;
	if(top==n){
		printf("\noverflow\n");
	}
	else{
		printf("enter the value");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
		
	}
}
void pop(){
	if(top==-1)
		printf("\n underflow");
	else
		top=top-1;
}
void show(){
	for(i=top;i>=0;i--){
		printf("%d\n",stack[i]);
		
	}
	if(top==-1){
		printf("stack is empty");
		
	}
}