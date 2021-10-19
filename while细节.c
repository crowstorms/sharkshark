#include<stdio.h>
int main()
{
	int n=0,num;
	while(n++<3);//循环在此进入下一迭代，因为单独一个分号被视为一个语句 //所有的任务都在测试条件中完成了，不需要在循环体做什么 
		printf("n is %d.\n",n);//非循环的一部分 
	printf("Done!");
	
	
	while(scanf("%d",&num)==1) //跳过整数输入 
		; 
	
	
	
	
	
	return 0;
	
	
	
	
 } 
