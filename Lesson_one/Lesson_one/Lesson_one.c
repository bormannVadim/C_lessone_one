
//Савенко Вадим Романович

#include <stdio.h>
#include <math.h>
#include <string.h> 


double task_one(double weight,double height);
void task_two(double b, double a, double c);
void task_three(int age);
int task_four(int x1, int x2, int y1, int y2);



int main()
{
	getch();
	return 0;
}

double task_one(double weight,double height)
{
	 return   weight / pow(height/100,2);
}

void task_two(double b, double a, double c)
{

	double d =  pow(b, 2) - 4 * a*c;
	
	if (d > 0) //  корней 2
	{
		double x1 = (-b + sqrt(a - 4 * a*c)) / (2 * a);
		double x2 = (-b - sqrt(a - 4 * a*c)) / (2 * a);
	}
	else if (d = 0)//один корень
	{
		double x1 = -b / (2 * a);
	}
	else // корней нет
	{
		printf("Korney net!");
	}

}

void task_three(int age)
{
	int ending = age % 10;
	if ((age >= 11 && age <= 14) || (age >= 111 && age <= 114) || ending >=5 || ending == 0)
	{
		printf("%d let\n", age);
	}
	else if (ending == 1)
	{
		printf("%d god\n", age);
	}
	else
	{
		printf("%d goda\n", age);
	}
}

int task_four(int x1, int x2, int y1, int y2)
{
	// 1-8
/*
	31 32 33 
	21 22 23 
	11 12 13 
	
	*/
	// 1 - совпадают, 0 - не совпадают

	if ((x1 % 2 == 0 && x2 % 2 ==0) && (y1 % 2 == 0 && y2 % 2 == 0)) // все четные ряда
	{
		return 1;
	}
	else if ((x1 % 2 != 0 && x2 % 2 != 0) && (y1 % 2 != 0 && y2 % 2 != 0)) // все не чётные
	{
		return 1;
	}
	else if ((x1 % 2 != 0 && x2 % 2 == 0) && (y1 % 2 == 0 && y2 % 2 == 0)) 
	{
		return 0;
	}
	else if ((x1 % 2 == 0 && x2 % 2 != 0) && (y1 % 2 == 0 && y2 % 2 == 0)) 
	{
		return 0;
	}
	else if ((x1 % 2 != 0 && x2 % 2 == 0) && (y1 % 2 != 0 && y2 % 2 == 0)) 
	{
		return 1;
	}
	else if ((x1 % 2 != 0 && x2 % 2 == 0) && (y1 % 2 == 0 && y2 % 2 != 0)) 
	{
		return 1;
	}

	return 0;
}

