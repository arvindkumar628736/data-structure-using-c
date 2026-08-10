# include<stdio.h>
int main(){
  int search,mid,temp;
  int low=0,high=9;
  int arr[10];
  int found=0;
  for(int i=0;i<10;i++){
    printf("Enter your %d element:",i+1);
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<10;i++){
    for(int j=i+1;j<10;j++){
      if(arr[i]>arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  printf("Enter your search element:");
  scanf("%d",&search);
  while(low<=high){
    mid=(low+high)/2;
    if(arr[mid]==search){
      printf("element is found at %d position",mid+1);
      found=1;
      break;
    }
    else if(arr[mid]>search){
      high=mid-1;
    }
    else{
      low=mid+1;
    }
  }
  if(found==0){
    printf("element is not exist in array");
  }
 return 0;

}