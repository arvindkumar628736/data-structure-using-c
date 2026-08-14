# include<stdio.h>
int main(){
  int num=1;
  int arr[3][3];
  printf("Enter your element:");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("enter your %d number:",num);
      scanf("%d",&arr[i][j]);
      num++;
    }
  }
 printf("printing your element in maitrix form\n");
  for(int i=0;i<3;i++){
    printf("\n");
    for(int j=0;j<3;j++){
      printf(" %d",arr[i][j]);
    }
  }
  printf("\ndigonal elements are:-\n");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      if(i==j){
        printf(" %d\n",arr[i][j]);
      }
    }
  }
   printf("\nupper trangular elements are:-\n");
  for(int i=0;i<3;i++){
    printf("\n");
    for(int j=0;j<3;j++){
      if(i==j|| i<j){
        printf(" %d",arr[i][j]);
      }else
      printf("  ");
    }
  }
  return 0;
}