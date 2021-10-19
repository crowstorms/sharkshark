#include<stdio.h>
#include<math.h> 
int main()
{
	const double ANSWER=3.14159;
	double response;
	
	scanf("%lf",&response);
	while(fabs(response-ANSWER)>0.0001)//fabsÈ¡¾ø¶ÔÖµ 
{
	printf("try again!\n"); 
	scanf("%lf",&response);
}
	
	printf("ENOUGH!\n");
	
	
	
	return 0;
	
	
	
	
 } 
