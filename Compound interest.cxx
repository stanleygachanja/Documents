#include<stdio.h>

    
//fuction to calculate simple interest
int calculate_simple_interest(int principal,  int time, int rate){
 return (principal* time*rate)/100;
}
int main(){
 int principal, time, rate, interest;
 printf("enter the principal");
 scanf("%d" ,&principal);
 printf("enter time");
 scanf("%d" ,&time);
 printf(" enter rate");
 scanf("%d" ,&rate);
 interest= calculate_simple_interest(int (principal), int (time), int (rate));
 printf("simple interest :%d" ,interest);
 return 0;
}