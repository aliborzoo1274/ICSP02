#include <stdio.h>
#define TRUE 1
#define FALSE 0
int main(){

int num;
for(num=2; num<100; num++)
    if(num%2!=0 && num%3!=0 && num%5!=0 && num%7!=0){
    if(num==2 || num==3 || num==5 || num==7)
printf("%d\n", num);   }
}