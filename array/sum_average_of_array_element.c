# include<stdio.h>
int main(){
  int arr[5];
  int sum=0,count=0;
  float avg;
  for(int i=0;i<5;i++){
    printf("Enter your %d no.:",i+1);
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
    count++;
  }
  avg=(float)sum/count;
  printf("sum=%d\n",sum);
  printf("avg=%.2f\n",avg);
  
 return 0;
}