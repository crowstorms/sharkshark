#include <stdio.h>
int main()
{
	printf("here's a way to print a ");
	printf("long string.\n");
	
	printf("here's another way to print a \
long string.\n");//这行代码必须从最左边开设，如打空格或tab，会算作字符串的一部分 
	
	printf("here's the newest way to print a "         "long string.\n");//这里的空白内空多少都是一样的。 在两个双引号括起来的字符串之间用空白隔开，c编译器会把多个字符串看成一个字符串 
	
	return 0;
	
 } 
