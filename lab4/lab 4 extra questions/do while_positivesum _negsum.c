#include<stdio.h>
int main(){
    int n;
    int p_sum=0;
    int n_sum=0;
    do{
        scanf("%d",&n);
        if(n>0){
            p_sum=p_sum+n;
        }
        else if(n<0){
            n_sum=n_sum+n;
        }
        
    }while(n!=-1);
    printf("sum of positive numbers =%d\nsum of negative numbers =%d",p_sum,n_sum);
    return 0;
    
}