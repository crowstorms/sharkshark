#include<stdio.h>
int main()
{
	unsigned width, precision;
	int num = 256;
	double weight = 245.5;
	
	printf("Enter a field width:\n");
	scanf("%d", &width);
	printf("The num ie :%*d:\n", width, num);//*�ڱ�ʾ�ַ���ȵ�λ�ã���������ֵ�����ַ���� 
	printf("Now enter a width and a precision:\n"); 
	scanf("%d %d",&width, &precision);//�����ַ���ȵ���ֵ��С�����ȡλ����ֵ 
	printf("weight = %*.*f\n", width, precision, weight);//��һ��*�ڱ�ʾ�ַ���ȵ�λ�ã��ڶ���*�ڱ�ʾС�����ȡλ����λ�� 
	printf("Done!\n");
	 
	
	
	
	
	
	
	
	return 0;
}
