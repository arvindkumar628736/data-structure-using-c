# include<stdio.h>
int main(){
  int arr[10]={40,20,50,60,15,90,80,55,65,42};
  int num;
  
  printf("Enter your number do you want to search:");
  scanf("%d",&num);
  for(int i=0; i<10;i++){
    if(arr[i]==num){
      printf("%d element is in here of inder %d ",arr[i],i);
      return 0;
    }
  }

  printf("this element is not here.");
  return 0;
}