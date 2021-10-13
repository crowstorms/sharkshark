#include<stdio.h>
int main()
{
	unsigned width, precision;
	int num = 256;
	double weight = 245.5;
	
	printf("Enter a field width:\n");
	scanf("%d", &width);
	printf("The num ie :%*d:\n", width, num);//*在表示字符宽度的位置，给它赋的值就是字符宽度 
	printf("Now enter a width and a precision:\n"); 
	scanf("%d %d",&width, &precision);//键入字符宽度的数值和小数点后取位的数值 
	printf("weight = %*.*f\n", width, precision, weight);//第一个*在表示字符宽度的位置，第二个*在表示小数点后取位数的位置 
	printf("Done!\n");
	 
	
	
	
	
	
	
	
	return 0;
}
