#include <stdio.h>
#include <stdlib.h>
int main()
{
	int job=-1,hours,quantity;
	float salary,sales,wage,remuneration;
	while (1)
	{
		printf("Enter the job class(0 to end):");		scanf_s("%d", &job);
		if (job != 0)
		{
			switch (job)
			{
			case(1):											//�p��g�z�H���~��//
				printf("The job class is Manager.\n");
				printf("Enter a weekly salary:");		scanf_s("%f", &salary);
				printf("Salary:%.2f\n\n", salary);
				break;
			case(2):											//�p����~�u�~��//
				printf("The job class is Hourly Worker.\n");
				printf("Enter the working hours:");		scanf_s("%d", &hours);
				printf("Enter the hourly wage:");		scanf_s("%f", &wage);
				if (hours > 40) { salary = wage * 40 + (hours - 40)*1.5*wage; }
				else if ((hours <= 40) && (hours > 0)) { salary = wage*hours; }
				else { printf("Error\n"); }
				printf("Salary:%.2f\n\n", salary);
				break;
			case(3):											//�p�������u�~��//
				printf("The job class is Commission Worker.\n");
				printf("Enter the amount of sales:");	scanf_s("%f", &sales);
				printf("Salary:%.2f\n\n", 250 + sales*5.7*0.01);
				break;
			case(4):											//�p��s�u�~��//
				printf("The job class is Temporary Worker.\n");
				printf("Enter the quantity of production:");	scanf_s("%d", &quantity);
				printf("Enter each remuneration:");		scanf_s("%f", &remuneration);
				printf("Salary:%.2f\n\n", remuneration*quantity);
				break;
			}
		}
		else { break; }
	}
	return 0;
}