#include <stdio.h>
int main()
{
	int Cuenta[2000];
	float Calif[2000];
	int aux;
	float aux2;
	int alumnos;
	scanf_s("%i", &alumnos);
	for (int x = 0; x < alumnos; x++)
	{
		//printf("Numero de cuenta [%i]:", x + 1);
		scanf_s("%i", &x[Cuenta]);

	}

	for (int i = 0;i < alumnos; i++)
	{
		for (int j = 0;j < alumnos;j++)
		{
			if (Cuenta[j] < Cuenta[j + 1])
			{
				if (Cuenta[j] == Cuenta[j])
				{

				}
				aux = Cuenta[j + 1];
				Cuenta[j + 1] = Cuenta[j];
				Cuenta[j] = aux;

			}
		}
	}
	for (int m = 0; m < alumnos; m++)
	{
		//printf("Numero de Calificacion [%i]:", m + 1);
		scanf_s("%f", &m[Calif]);

	}

	for (int q = 0;q < alumnos; q++)
	{
		for (int p = 0;p < alumnos;p++)
		{
			if (Calif[p] < Calif[p - 1])
			{
				if (Cuenta[p] == Cuenta[p])
				{

				}
				aux2 = Calif[p - 1];
				Calif[p - 1] = Calif[p];
				Calif[p] = aux2;

			}
		}
	}

	for (int i = 0; i < alumnos; i++)
	{
		
		
			printf("%i %f\n", Cuenta[i], Calif[i]);
		


	}
	return 0;
}