#include <stdio.h>
int main()
{
//��һ�� 
	printf("Lin Zeng\n");
	printf("Lin\n");
	printf("Zeng\n");
	printf("Lin Zeng\n");
	
//�ڶ���	
	printf("Lin Zeng\n");
	printf("FAFU\n");
	
//������	
	int age,days;
	age = 18;
	days = 18 * 365;
	printf("%d %d\n",age,days);
	
//������ 
	void jolly();//���������н��к�������Ҳ���ԣ���������ǰ���к�������Ҳ���ԣ� 
	jolly();
	jolly();
	jolly();
	void deny();
	deny();
	
//������
 	printf("Brazil,Russia,India,China\n");
	void in(),br();//һ�κ���������������������� 
	br();
 	in();
	
//������
	int toes,toes2,toes3;
	toes = 10;
	toes2 = toes * toes;
	toes3 = toes * toes2;
	printf("%d %d %d\n",toes,toes2,toes3);
	
//������
	void smile();
	printf("Smile!Smile!Smile!\n");
	printf("Smile!Smile!\n");
	smile();	
	
//�ڰ���
	void one_three(),two();//�»���_���԰�סshift�����ż������	
	printf("starting now:\n");
	one_three();
	two();
	printf("three\ndone!\n");
	 
	
	
	return 0;
}


//������������~~~~~~~~~~~~~ 
void jolly(void)//�������������ĩβ����Ҫ�ӷֺţ� 
{
	printf("For he is a good jolly fellow.\n");
	
}
void deny(void)
{
	printf("Which nobody can deny!\n");
	
}
void br(void)
{
	printf("Brazil,Russia\n");
	
}
void in(void)
{
	printf("India,China\n");
	
}
void smile()
{
	printf("Smile!\n");
	
} 
void one_three()
{
	printf("one\n");
	
 } 
void two()
{
	printf("two\n");
	
 } 
 
