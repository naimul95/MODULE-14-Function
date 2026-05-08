#include<stdio.h>
int z=30; // global variable works for every function as a same //
int sum(){
    int x=10;
    printf("sum-->%d\n",x);
     printf("sum(global)-->%d\n",z);
}
int main () //same name variable but work on his scope only //
{  
     int x=20;
    printf("main-->%d\n",x);
     sum();
     printf("main(global)-->%d\n",z);
   

    return 0;
   
}   