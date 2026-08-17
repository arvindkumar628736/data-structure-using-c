#include<stdio.h>
void push();
void pop();
void display();
#define MAXSIZE 10
int stack[MAXSIZE];
int top=-1;
int main(){
  int n;
  printf("----------------stack----------------");
  printf("\n1.push\n2.pop\n3.display\n4.exit");
  printf("\n-------------------------------------");
  printf("Enter your choice:");
  scanf("%d",&n);
  switch(n){
    case 1: push(); break;
    case 2: pop();  break;
    case 3: display(); break;
    case 4: return 0;
  }
}
void push(){
  int num;
  printf("enter your number for push :");
  scanf("%d",&num);
  top=top+1;
  stack[top]=num;
  printf("your element %d is pused\n",num);
  return 0;
}