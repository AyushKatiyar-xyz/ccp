//interchange the largest and smallest number in the given array
#include <stdio.h>
#include<limits.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
    scanf("%d",&arr[i]);    
    }
    int maximum=INT_MIN;
    int maxindex;
    int minindex;
    int minimum=INT_MAX;
    for(int i=0;i<n;i++){
        if(maximum<arr[i]){maximum=arr[i];
        maxindex=i;}
        if(minimum>arr[i]){minimum=arr[i];
        minindex=i;}
        
    }
    arr[minindex]=maximum;
    arr[maxindex]=minimum;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
     
    
	
	return 0;
}

