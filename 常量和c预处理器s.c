#include<stdio.h>
#define PI 3.14159//��������ĳ���PI��Ϊ��ʾ���� 
				  //�������ʱ�����������е�PI���ᱻ�滻Ϊ3.14159���ù��̳�Ϊ����ʱ�滻
				  //��ͳ�ô�д����ʾ���ų���
int main()//����pizza��������ܳ� 
{
	float r, s, c;
	printf("r?\n");

	scanf("%f",&r); 
	s = PI*r*r;
	c = 2.0*PI*r; 
	printf("%f %f",s,c);
	
	return 0;



}				   
