#include <stdio.h>

int main ()
{
	int num;
	printf("Informe o numero:\n");
	scanf("%d", &num);
	if (num % 5 == 0)
	   printf("O número %d é divisível por 5\n", num);
	else
	   printf("O número %d não é divisível por 5\n", num);
	   
	   
	return (0);
}
