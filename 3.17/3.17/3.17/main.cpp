#include <stdio.h>
#include <stdlib.h>
int main()
{
	int account=0;
	float a, b, c, d,e;
	while(1)
	{
		printf("Enter account number(-1 to end):");	scanf_s("%d",&account);
		if (account != -1)
		{
			printf("Enter beginning balance:");	scanf_s("%f", &a);
			printf("Enter total charge:");		scanf_s("%f", &b);
			printf("Enter total credits:");		scanf_s("%f", &c);
			printf("Enter credit limit:");		scanf_s("%f", &d);
			e = a + b - c;
			if (e > d)
			{
				printf("Account:\t%d\n", account);
				printf("Credit limit:\t%.2f\n", d);
				printf("Balance:\t%.2f\n", e);
				printf("Credit Limit Exceed\n\n");
			}
			else { printf("\n"); }
		}
		else { break; }
		
	}
	return 0;
}