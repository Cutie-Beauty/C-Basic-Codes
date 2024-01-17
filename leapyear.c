//program prepared for Leap Year
//depeloped by Harshada Nizare
//date 9/01/2024
#include<stdio.h>
int main()
{
	int year;
	
	printf("\n Enter the Year:-");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("\n The Year is Leap Year");
	}
	else
	{
	  printf("\n The Year is not Leap Year");	
	}
	
		return 0;
}