#include<stdio.h>
int main()
{
  double salary,value;
  double TOTAL;
  char name;
  scanf("%s %lf %lf",&name,&salary,&value); // user input - two double type and one input is char type

  TOTAL = salary+value*.15;
  printf("TOTAL = R$ %.2lf\n",TOTAL);
  return 0;
}
