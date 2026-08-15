# include<stdio.h>
int main(){
  int arr[5];
  int max,min;
  printf("Enter your 1st element:");
  scanf("%d",&arr[0]);
  max=arr[0];
  min=arr[0];
  for(int i=1;i<5;i++){
    printf("Enter your %d no.",i+1);
    scanf("%d",&arr[i]);
    if(arr[i]>max)
     max=arr[i];
    if(arr[i]<min)
     min=arr[i];
  }
  printf("max=%d\n",max);
  printf("min=%d",min);
  return 0;
}