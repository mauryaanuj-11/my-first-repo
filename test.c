#include<stdio.h>
void main()

{
    int a=10,b=11;
    int *p=&a,*q=&b;
  //  *p=11;
  *p=*q;
    printf("%d\n", a);
    printf("%d \t%d", *p,*q);

	printf("This is for test");
}
