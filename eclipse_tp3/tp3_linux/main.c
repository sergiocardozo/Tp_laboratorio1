#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "Employee.h"
#include "utn.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
	LinkedList* listaEmpleados = ll_newLinkedList();
	int flag1Texto = 0;
	int flag2Bin = 0;
    int option = 0;

    do{

    printf("\n/****************************************************\
			\nMenu:\
			\n1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).\
			\n2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).\
			\n\n3. Alta de empleado\
			\n4. Modificar datos de empleado\
			\n5. Baja de empleado\
			\n6. Listar empleados\
			\n7. Ordenar empleados\
			\n\n8. Guardar los datos de los empleados en el archivo data.csv (modo texto).\
			\n9. Guardar los datos de los empleados en el archivo data.csv (modo binario).\
			\n\n10. Salir\
			\n*****************************************************/");
    utn_getUnsignedInt("\nSeleccione opcion: ","Opcion invalida",1,sizeof(int),1,10,3,&option);
    switch(option)
    {
    case 1:
    	if(!controller_loadFromText("data.csv",listaEmpleados))
    	{
    		printf("\nSe cargo el archivo modo texto correctamente");
    		flag1Texto = 1;
    	}
    	break;
    case 2:
    	if(!controller_loadFromBinary("data.bin",listaEmpleados))
    	{
    		printf("\nSe cargo el archivo modo binario correctamente");
    		flag2Bin = 1;
    	}
    	break;
    case 3:
    	if(flag1Texto || flag2Bin)
    	{
    		controller_addEmployee(listaEmpleados);
    	}
    	else
    	{
    		printf("\nDebe realizar la carga de archivos antes de continuar\n\n");
    	}
    	break;
    case 4:
    	if(flag1Texto || flag2Bin)
    	{
    		controller_editEmployee(listaEmpleados);
    	}
    	else
    	{
    		printf("\nDebe realizar la carga de archivos antes de continuar\n\n");
    	}
    	break;
    case 5:
    	if(flag1Texto || flag2Bin)
    	{
    		controller_removeEmployee(listaEmpleados);
    	}
    	else
    	{
    		printf("\nDebe realizar la carga de archivos antes de continuar\n\n");
    	}
    	break;
    case 6:
    	if(flag1Texto || flag2Bin)
    	{
    		controller_ListEmployee(listaEmpleados);
    	}
    	else
    	{
    		printf("\nDebe realizar la carga de archivos antes de continuar\n\n");
    	}
    	break;
    case 7:
    	if(flag1Texto || flag2Bin)
    	{
    		controller_sortEmployee(listaEmpleados);
    	}
    	else
    	{
    		printf("\nDebe realizar la carga de archivos antes de continuar\n\n");
    	}
    	break;
    case 8:
    	if(flag1Texto)
    	{
    		controller_saveAsText("dataSave.csv",listaEmpleados);
    		printf("\nSe guardo el archivo modo texto correctamente");
    	}
    	else
    	{
    		printf("\nDebe cargar el archivo en modo texto para poder guardarlo\n\n");
    	}
    	break;
    case 9:
    	if(flag2Bin)
    	{
    		controller_saveAsBinary("dataSave.bin",listaEmpleados);
    		printf("\nSe guardo el archivo modo binario correctamente");
    	}
    	else
    	{
    		printf("\nDebe cargar el archivo en modo binario para poder guardarlo\n\n");
    	}
    	break;
    case 10:
    	break;
    default:
    	printf("\nOpcion invalida ingrece una opcion del 1 al 10 ");
    }
    }while(option != 10);
    return 0;
}
