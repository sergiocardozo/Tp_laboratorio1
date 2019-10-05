/*
 ============================================================================
 Name        : Trabajopractico1.c
 Author      : Cardozo Sergio
 Version     :
 Copyright   : GLP
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "menu.h"
#define FUNCIONES_H_
#define MENU_H_

int main()
{
float numero1 = 0;
float numero2 = 0;
int opciones;
float suma;
float resta;
float division;
float multiplicacion;
int factorialA;
int factorialB;
int retornoA = 0;
int retornoB = 0;

	do {
			getMenu(numero1,numero2);
			scanf("%d",&opciones);
			switch (opciones) {
			case 1:
			numero1 = getNumber("Ingresar primer operando: ");
			retornoA = 1;
			break;
			case 2:
			numero2 = getNumber("Ingresar segundo operando: ");
			retornoB = 1;
			break;
			case 3:
				if(retornoA != retornoB)
				{
				printf("\nFalta ingresar un operando vuelva a la opcion 1 o 2.");
				}
				else
				{
				suma = getSum(numero1,numero2);
				resta = getSubtraction(numero1,numero2);
				multiplicacion = getMultiply(numero1,numero2);
				division = getDivide(numero1,numero2);
				factorialA = getFactorial(numero1);
				factorialB = getFactorial(numero2);
				printf("\n Se resolvieron todas las operaciones.\n");
				}
			break;
			case 4:
			printf("El resultado de A+B es: %.2f",suma);
			printf("\nEl resultado de A-B es: %.2f",resta);
			printf("\nEl resultado de A*B es: %.2f",multiplicacion);
				if(numero2==0)
				{
				printf("\nNo se puede dividir por 0");
				}
				else
				{
				printf("\nEl resultado de A/B es: %.2f",division);
				}

				if(numero1<0)
				{
				printf("\nNo se puede sacar el factorial de un numero negativo.\n");
				}
				else{
				printf("\nEl numero !A es: %d",factorialA);
				}
				if(numero2<0){
				printf("\nNo se puede sacar el factorial de un numero negativo.\n");
				}
				else
				{
				printf("\nEl numero !B es: %d\n",factorialB);
				}
			break;
			case 5:
			printf("Saliendo de la calculadora.");
			break;
			default:
			printf("\nLa opcion ingresada no es correcta.\n");
			break;
			}
	}
	while (opciones != 5);
return 0;

}
