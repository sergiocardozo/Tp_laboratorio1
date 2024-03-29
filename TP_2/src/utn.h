/*
 * utn.h
 *
 *  Created on: 4 oct. 2019
 *      Author: sergio
 */

#ifndef UTN_H_
#define UTN_H_

int getInt(char* mensaje);
float getFloat(char* mensaje);
char getChar(char* mensaje);

char getNumeroAleatorio(int desde , int hasta, int iniciar);

int esNumerico(char *str) ;
int esTelefono(char *str);
int esAlfaNumerico(char *str);
int esSoloLetras(char *str);
int esNumericoFlotante(char str[]);

void getString(char mensaje[],char input[]);
int getStringLetras(char mensaje[],char input[]);
int getStringNumeros(char mensaje[],char input[]);
int getStringNumerosFlotantes(char mensaje[],char input[]);

int getValidString(char requestMessage[],char errorMessage[], char errorMessageLenght[],char input[], int maxLenght,int attemps);
int getValidInt(char requestMessage[],char errorMessage[], int* input,int lowLimit, int hiLimit,int attemps);
int getValidIntA(char requestMessage[],char errorMessage[], int lowLimit, int hiLimit);
int getValidFloat(char requestMessage[],char errorMessage[], int lowLimit, int hiLimit);

void clearStdin(void);
void pause(void);
void clearScreen(void);



#endif /* UTN_H_ */
