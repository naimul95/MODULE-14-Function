#include<stdio.h>
int sum(int a, int b){
    int answer= a+b;
    return answer;
}
int main ()
{  
     int a,b;
     scanf("%d %d",&a,&b);
     int sumation = sum(a,b);
     printf("%d",sumation);

    return 0;
   
}   