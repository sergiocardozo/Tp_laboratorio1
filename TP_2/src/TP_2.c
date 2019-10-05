/*
 ============================================================================
 Name        : TP_2.c
 Author      : Cardozo Sergio
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "arrayEmployees.h"

#define QTY_EMPLOYEE 1000


int main()
{
	int opcion;
	//Se crea el array de empleados y se inicializa
    Employee eEmpleados[QTY_EMPLOYEE];
    initEmployees(eEmpleados,QTY_EMPLOYEE);

    /* addEmployee(eEmpleados,QTY_EMPLOYEE,0,"SERGIO","CARDOZO",25000,2);
    addEmployee(eEmpleados,QTY_EMPLOYEE,1,"VIVIANA","JUAREZ",40000,3);
    addEmployee(eEmpleados,QTY_EMPLOYEE,2,"AXEL","LAZ",30000,2);
    addEmployee(eEmpleados,QTY_EMPLOYEE,3,"ESTEBAN","CARDOZO",350000,4);
	*/
    do
    {

        printf("\n1-MENU DE OPCIONES\
                        \n\n1-ALTAS\
                        \n2-MODIFICAR\
                        \n3-BAJA\
                        \n4-INFORMES\
            		     \n5-SALIR\n");
        getValidInt("\nSelecione una opcion: ","\nOpcion invalida",&opcion,1,5,10);

        switch(opcion)
        {
        case 1:
        	printf("\n ALTAS\n");
            controllerGetEmployee(eEmpleados,QTY_EMPLOYEE);
            break;
        case 2:
        	printf("\nMODIFICAR\n");
        	printEmployees(eEmpleados,QTY_EMPLOYEE);
        	if(existEmployees(eEmpleados,QTY_EMPLOYEE)==0)
        	{
        		modifyEmployee(eEmpleados,QTY_EMPLOYEE);
        	}
        	else
        	{
        		printf("Debe dar de alta un empleado vuelva a la opcion 1 \n");
        	}
        	break;
        case 3:
        	printf("\nBAJAS\n");
        	printEmployees(eEmpleados,QTY_EMPLOYEE);
        	if(existEmployees(eEmpleados,QTY_EMPLOYEE)==0)
        	{
        		getDeleteEmployee(eEmpleados,QTY_EMPLOYEE);
        	}
        	else
        	{
        		printf("Debe dar de alta un empleado vuelva a la opcion 1 \n");
        	}
            break;
        case 4:
        	printf("\nINFORMES\n");
        	if(existEmployees(eEmpleados,QTY_EMPLOYEE) == 0)
        	{
        		informesEmployees(eEmpleados,QTY_EMPLOYEE);
        	}
        	else
        	{
        		printf("Debe dar de alta un empleado vuelva a la opcion 1 \n");
        	}
            break;
        case 5:
            //SALIR
            break;
        default:
            printf("\nIngrese una opcion de 1 a 5\n\n");
            pause();
            break;
        }

    }while(opcion != 5);

    return 0;

}
