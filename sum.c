/*
the program will calculate the sum from 1 to inputed number
Author:Qiushi Zhou
version 1.0
for SE_spring2019
input: intger number

*/
#include<stdio.h>

main(){
  //declear variables
  int i,num,sum=0,count;
  float averg=0.0;
  //promote the user from num
  printf("please enter the value of the number : \n");
  scanf("%d",&num);
  printf("the value of Number is : %d\n",num);
  //get the sum from 1 to promoted number
  for(i=1;i<=num;i++)
    {
      sum+=i;
      count=i;
    }
  //print the sum
  printf("The sum of the numbers from 1 to num= %d is sum=%d  \n",num,sum);
  printf("the average of the number is : %f \n",sum/count);

  return 0;
}//end of main
