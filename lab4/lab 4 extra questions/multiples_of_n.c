 #include<stdio.h>
 int main(){
     int n;
     printf("enter the number:\n");
     scanf("%d",&n);
     int i=1;
     while(i<=100){
         if(i%n==0){printf("%d\n",i);}
         
    i++; 
     }

  return 0; }
 
 