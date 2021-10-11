#include<stdio.h>
#define PI 3.14159//这样定义的常量PI称为明示常量 
				  //编译程序时，程序中所有的PI都会被替换为3.14159，该过程称为编译时替换
				  //传统用大写来表示符号常量
int main()//计算pizza的面积和周长 
{
	float r, s, c;
	printf("r?\n");

	scanf("%f",&r); 
	s = PI*r*r;
	c = 2.0*PI*r; 
	printf("%f %f",s,c);
	
	return 0;



}				   
