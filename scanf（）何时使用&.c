#include<stdio.h>
int main()
{
	int age;
	float assets;
	char pet[30]; //字符类型，用于存储字符串 
	
	printf("ages,assets,pet\n");
	scanf("%d %f", &age, &assets);//这里写%.2f的话不会报错，但是输出结果为0 
	scanf("%s", pet);//字符数组不使用& 
	printf("%d $%.2f %s\n", age, assets, pet); 
	
	return 0;
	
	
 } 
