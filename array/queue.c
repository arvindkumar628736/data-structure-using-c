#include <stdio.h>
#define MAXSIZE 10
int front = -1, rear = -1;
int queue[MAXSIZE];
void insert();
void delete();
void display();
int main()
{
  int choice;
  while (1)
  {
    printf("-------------queue------------");
    printf("\n1.insert\n2.delete\n3.display\n4.exit");
    printf("\n---------------------------------");
    printf("\nEnter your choice:");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      insert();
      break;
    case 2:
      delete();
      break;
    case 3:
      display();
      break;
    case 4:
      return 0;
    }
  }
}
void insert()
{
  int n;
  if (rear == 9)
  {
    printf("queue is overflow");
  }
  else
  {
    printf("Enter your number for insert:");
    scanf("%d", &n);
    rear++;
    queue[rear] = n;
    if (front == -1)
    {
      front = 0;
    }
  }
}
void delete()
{
  int n;
  if (front == -1)
  {
    printf("queue is empty");
  }
  else
  {
    n = queue[front];
    front++;
    printf(" %d element id deleted\n", n);
  }
}
void display()
{
  if (front == -1)
  {
    printf("queue is empty\n");
  }
  else
  {
    printf("queue elements are:");
    for (int i = front; i <= rear; i++)
    {
      printf("\n%d", queue[i]);
    }
    printf("\n");
  }
}