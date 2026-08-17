# include<stdio.h>
#define MAXSIZE 10
int top=-1;
void push();
void pop();
void display();
int stack[MAXSIZE];
int main(){
  int choice;
  do{printf("\n-------------stack------------");
  printf("\n1.push\n2.pop\n3.display\n4.exit");
  printf("\n---------------------------------");
  printf("\nEnter your choice:");
  scanf("%d",&choice);
  if(choice>4){
    printf("you enter invlid no.");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
  }
  switch(choice){
    case 1: push(); break;
    case 2: pop(); break;
    case 3: display(); break;
  }
}while(choice!=4);
}
void push(){
  int n;
  if(top==9)
  printf("stack is overflow");
  else{
    printf("Enter your number for push:");
    scanf("%d",&n);
    top++;
    stack[top]=n;
  }
}
void display(){
  if(top==-1)
  printf("stack is empty");
  else{
    printf("stack elements are:");
    for(int i=top;i>=0;i--){
      printf("\n%d",stack[i]);
    }
  }
}
void pop(){
  int n;
  if(top==-1){
    printf("stack is empty");
  }
  else{
    printf("Enter your pop element:");
    scanf("%d",&n);
    top--;
    printf("%d element is poped\n",n);
  }
}