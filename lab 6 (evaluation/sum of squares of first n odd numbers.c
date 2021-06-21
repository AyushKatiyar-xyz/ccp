//sum of squares of first n odd numbers
#include <stdio.h>

int main() {
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	int sum =0;
	for(int i=1;n>=0;i=i+2,n--){
	    sum=sum+pow(i,2);
	}
	printf("answer= %d",sum);
	return 0;
}

