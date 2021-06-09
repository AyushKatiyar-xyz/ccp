 #include<stdio.h>
 int main(){
     int p=0,ne=0,z=0;
     int n;
     while(n!=-1){
         scanf("%d",&n);
         if(n>0){p++;}
         else if(n==0){z++;}
         else{ne++;}
     }
     printf("positive=%d\nnegative=%d\nzero=%d",p,ne,z);
     return 0;
 }

