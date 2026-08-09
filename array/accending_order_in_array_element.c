//arange array elements in accending order
# include<stdio.h>
int main(){
  int arr[10];
  int temp,i,j;
  for(i=0;i<10;i++){
    printf("Enter %d element:",i+1);
    scanf("%d",&arr[i]);
  }
  for(i=0;i<10;i++){
    for(j=i+1;j<10;j++){
      if(arr[j]<arr[i]){
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
    }
  }
  printf("after aranging array are:");
  for(i=0;i<10;i++){
    printf(" %d",arr[i]);
  }
  return 0;
}