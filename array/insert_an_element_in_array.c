# include<stdio.h>
int main(){
  int arr[100];
  int n,pos,temp;
  printf("enter how many number you enter:");
  scanf("%d",&temp);
  for(int i=0;i<temp;i++){
    printf("Enter your %d number:",i+1);
    scanf("%d",&arr[i]);
  }
  printf("Enter your possion, there you wnat to inseart number:");
  scanf("%d",&pos);
  temp++;
  printf("Enter your number to inseart:");
  scanf("%d",&n);
  for(int i=temp-1;i>=pos;i--){
    arr[i]=arr[i-1];
  }
  arr[pos-1]=n;
  for(int i=0;i<temp;i++){
    printf(" %d",arr[i]);
  }
  return 0;

}