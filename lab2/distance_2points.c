#include <stdio.h>
#include <math.h>
int main (){
    float x1=1,x2=5,y1=7,y2=10;
    float ans,temp_a,temp_b,temp;
    temp_a= ( x2-x1)*(x2-x1);
    temp_b =( y2-y1)*(y2-y1);
    temp= temp_a + temp_b;
    ans=sqrt(temp);
    printf ("the num is %f",ans);

    return 0;
}