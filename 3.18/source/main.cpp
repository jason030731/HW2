#include <stdio.h>
#include <stdlib.h>
int main()
{
	float sales=0, salary;
	while (1)
	{
		printf("Enter sales in dollars(-1 to end):");	scanf_s("%f", &sales);
		if (sales != -1)
		{
			salary = 200 + sales*0.09;
			printf("Salary is: $%.2f\n\n", salary);
		}
		else { break; }
	}
	return 0;
}