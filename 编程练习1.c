#include <stdio.h>
int main()
{
//第一题 
	printf("Lin Zeng\n");
	printf("Lin\n");
	printf("Zeng\n");
	printf("Lin Zeng\n");
	
//第二题	
	printf("Lin Zeng\n");
	printf("FAFU\n");
	
//第三题	
	int age,days;
	age = 18;
	days = 18 * 365;
	printf("%d %d\n",age,days);
	
//第四题 
	void jolly();//在主函数中进行函数声明也可以；在主函数前进行函数声明也可以； 
	jolly();
	jolly();
	jolly();
	void deny();
	deny();
	
//第五题
 	printf("Brazil,Russia,India,China\n");
	void in(),br();//一次函数声明可以声明多个函数 
	br();
 	in();
	
//第六题
	int toes,toes2,toes3;
	toes = 10;
	toes2 = toes * toes;
	toes3 = toes * toes2;
	printf("%d %d %d\n",toes,toes2,toes3);
	
//第七题
	void smile();
	printf("Smile!Smile!Smile!\n");
	printf("Smile!Smile!\n");
	smile();	
	
//第八题
	void one_three(),two();//下划线_可以按住shift＋减号键打出来	
	printf("starting now:\n");
	one_three();
	two();
	printf("three\ndone!\n");
	 
	
	
	return 0;
}


//函数定义区域~~~~~~~~~~~~~ 
void jolly(void)//函数声明的语句末尾不需要加分号； 
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
 
