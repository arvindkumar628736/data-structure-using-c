# include<stdio.h>
#include<conio.h>
# include<stdlib.h>
struct node{
  int data;
  struct node *add;

};struct node *start=NULL,*temp,*new1;

void create_node();
void insert_on_first();
void insert_on_middle();
void insert_on_last();
void delete_from_first();
void delete_from_middle();
void delete_from_last();
void display();
int main(){
  int choice;
  while(1){
  printf("\n--------------Linked List--------------\n");
  printf("1. create node");
  printf("\n2.insert on first");
  printf("\n3.insert on Middle");
  printf("\n4.insert on Last");
  printf("\n5.delete from first");
  printf("\n6.delete from Middle");
  printf("\n7.delete from Last");
  printf("\n8.Display");
  printf("\n9.Exit");
  printf("\n------------------------------------------");
  printf("\nEnter your choice:");
  scanf("%d",&choice);
  switch(choice){
    case 1: create_node(); break;
    case 2: insert_on_first(); break;
    case 3: insert_on_middle(); break;
    case 4: insert_on_last(); break;
    case 5: delete_from_first(); break;
    case 6: delete_from_middle(); break;
    case 7: delete_from_last(); break;
    case 8:display(); break;
    default: printf("Invalid choice\n");
  }
}
   
  return 0;

}
// creating node
void create_node(){
  int n;
  char ch;
  printf("Enter node data:");
  scanf("%d",&n);
  start=(struct node*)malloc(sizeof(struct node));
  start->data=n;
  start->add=NULL;
  temp=start;
  printf("Do you wnat to continue (Y/N):");
  scanf(" %c",&ch);
  while(ch=='Y'||ch=='y'){
    printf("Enter your element:");
    scanf("%d",&n);
    new1=(struct node*)malloc(sizeof(struct node));
    new1->data=n;
    new1->add=NULL;
    temp->add=new1;
    temp=temp->add;
    printf("do you want to continue(Y/N):");
    scanf(" %c",&ch);
  }
}
//display linked list
void display(){
  if(start==NULL){
    printf("List is empty");
  }else{
    temp=start;
    while(temp!=NULL){
      printf(" %d",temp->data);
      temp=temp->add;
    }
  }
  
}
// insert on first
void insert_on_first(){
  int n;
  printf("Enter Element:");
  scanf("%d",&n);
  new1=(struct node*)malloc(sizeof(struct node));
  new1->data=n;
  new1->add=start;
  start=new1;
}
// insert on middle
void insert_on_middle(){
  int n,pos,i=1;
  printf("Enter Element:");

  scanf("%d",&n);
  printf("Enter position:");
  scanf("%d",&pos);
  new1=(struct node*)malloc(sizeof(struct node));
  new1->data=n;
  temp=start;
  while(i<pos-1){
    temp=temp->add;
    i++;
  }
  new1->add=temp->add;
  temp->add=new1;

}
// insert on last
void insert_on_last(){
  int n;
  printf("Enter Element:");
  scanf("%d",&n);
  new1=(struct node*)malloc(sizeof(struct node));
  new1->data=n;
  new1->add=NULL;
  if(start==NULL){
    start=new1;
  }else{
    temp=start;
    while(temp->add!=NULL){
      temp=temp->add;
    }
    temp->add=new1;
  }

}
// delete frome first
void delete_from_first(){
  if (start==NULL){
    printf("List is empty");
  }else{
    temp=start;
    start=start->add;
    free(temp);
  }

}
// delete frome middle
void delete_from_middle(){
  int pos,i=1;
  if (start==NULL){
    printf("List is empty");
  }else{
    printf("Enter position:");
    scanf("%d",&pos);
    temp=start;
    while(i<pos-1){
      temp=temp->add;
      i++;
    }
    new1=temp->add;
    temp->add=new1->add;
    free(new1);
  }
}
// delete from last
void delete_from_last(){
  if (start==NULL){
    printf("List is empty");
  }else{
    temp=start;
    while(temp->add->add!=NULL){
      temp=temp->add;
    }
    free(temp->add);
    temp->add=NULL;
  }
}