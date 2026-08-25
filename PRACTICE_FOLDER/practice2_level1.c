#include<stdio.h> ////CALIFICACION FINAL 7.5/10
int main (){
	int dia,mes,year;
	printf ("Ingrese la fecha a revisar: \n");
	scanf("%d %d %d",&dia, &mes, &year);
	
	if (year > 0 && year < 2027)
	{
		if (mes < 13 && mes > 0)
		{
			if (year / 4 ) 
			{
				switch (mes)
				{
					case 1:
						if (dia < 32 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 2:
						if (dia < 30 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 3:
						if (dia < 32 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 4:
						if (dia < 31 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 5:
						if (dia < 32 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 6:
						if (dia < 31 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 7:
						if (dia < 32 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 8:
						if (dia < 32 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 9:
						if (dia < 31 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 10:
						if (dia < 32 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;	
					case 11:
						if (dia < 31 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 12:
						if (dia < 32 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;						
				}
			}
			else 
			{
				switch (mes)
				{
					case 1:
						if (dia < 32 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 2:
						if (dia < 29 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 3:
						if (dia < 32 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 4:
						if (dia < 31 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 5:
						if (dia < 32 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 6:
						if (dia < 31 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 7:
						if (dia < 32 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 8:
						if (dia < 32 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 9:
						if (dia < 31 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 10:
						if (dia < 32 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;	
					case 11:
						if (dia < 31 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;
					case 12:
						if (dia < 32 && dia > 0)
						{
							printf("fecha valida");
						}
						else
						{
							printf("fecha invalida");
						}
						break;						
				}	
			}
		}
		else 
		{
		printf("fecha invalida");	
		}
	}
	else 
	{
		printf("fecha invalida");	
	}
	
	
}