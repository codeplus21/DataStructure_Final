#include<stdio.h>
int main(){
   int h, m, s, n;//h=hour, m=minute, s=second
   scanf("%d", &n); //user input

   h = n / 3600;  //calculation hour
   m = n % 3600 / 60; //calculation minute
   s = n % 60;//calculation second
   printf("%d:%d:%d\n", h, m, s);
   return 0;
}
