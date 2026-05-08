#include<stdio.h>
int sum(){
     int a,b;
     scanf("%d %d",&a,&b);  //input value in function//
    int answer= a+b;
    return answer;
}
int main ()
{  
     int sumation = sum();
     printf("%d",sumation);

    return 0;
   
}   