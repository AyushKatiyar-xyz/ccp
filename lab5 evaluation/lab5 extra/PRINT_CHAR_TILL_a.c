#include<stdio.h>
int main(){
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){
       for(;ch>='a';ch--){
           printf("%c\n",ch);
       } 
    }
    else {printf("\nerror");}
        return 0;
}