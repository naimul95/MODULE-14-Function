#include<stdio.h>
void sum(int a, int b){  //when we don't want return 
 int answer= a+b;         // from function use void as a return type
printf("%d",answer);
}
int main ()
{  
     int a,b;
     scanf("%d %d",&a,&b);
      sum(a,b);
     

    return 0;
   
}   