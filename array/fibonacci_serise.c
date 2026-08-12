# include<stdio.h>
int main(){
  int pre,next,temp,num;
  printf("Enter your range do yo want to print:");
  scanf("%d",&num);
  printf(" 0");
  if(num>0){
    printf(" 1");
  }
  pre=0;
  next=1;
  while(pre+next<=num){
    temp=pre+next;
    printf(" %d",temp);
    pre=next;
    next=temp;
  }
  return 0;
}