#include<stdio.h>
int main()
{
  double s=2.0;
  while(s++<18.5)//与++s的区别 
  {	
	++s; 
	printf("%lf\n",s);

  }	
  printf("Done!\n");	
  return 0;
	
}
