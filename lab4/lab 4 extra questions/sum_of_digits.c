 //sum of digits
 #include<stdio.h>
 int main(){
     int num,sum;
     sum=0;
     printf("enter the number:\n");
     scanf("%d",&num);
     while(num!=0){
         int a=num%10;
         sum=sum+a;
         num=num/10;
     }
     printf("\nthe sum of the digits are:%d",sum);
     return 0;
 }