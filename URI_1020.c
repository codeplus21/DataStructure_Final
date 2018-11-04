
#include<stdio.h>

 int main(){

    int y, m, d, n;

    scanf("%d", &n); //user input



    y = n / 365; // calculation year

    m = n % 365 / 30;// calculation month

    d = n % 365 % 30;// calculation day

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y, m, d);

    return 0;

 }
