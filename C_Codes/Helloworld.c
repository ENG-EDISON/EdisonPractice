#include <stdio.h>

int a=0;

int main()
{
  printf("Add the number of times to print Helloworld\r\n");
  scanf("%d",&a);
  for(int i=0;i<a;i++)
    {
      printf("Helloword time %d\r\n",i);
    }
}
