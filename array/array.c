# include<stdio.h>
int main(){
  int arr[5];
  for(int i=0; i<5; i++){
    printf("Enter your %d element:",i+1);
    scanf("%d",&arr[i]);
  }
  printf("you enter elements are ---\n");
  for(int i=0; i<5; i++){
    printf("your %d element is: %d\n",i+1,arr[i]);
  }
  return 0;
}