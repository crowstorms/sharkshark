#include<stdio.h>
int main()
{
	int age;
	float assets;
	char pet[30]; //�ַ����ͣ����ڴ洢�ַ��� 
	
	printf("ages,assets,pet\n");
	scanf("%d %f", &age, &assets);//����д%.2f�Ļ����ᱨ������������Ϊ0 
	scanf("%s", pet);//�ַ����鲻ʹ��& 
	printf("%d $%.2f %s\n", age, assets, pet); 
	
	return 0;
	
	
 } 
