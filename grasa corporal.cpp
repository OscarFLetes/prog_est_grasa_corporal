/*Autor: Oscar Eduardo Fletes Ixta, realizado: 13/02/2022
	Programa que calcula e imprime la grasa corporal, ya sea de mujer o hombre
	
	Programa en lenguaje c que calcula la grasa corporal ya sea de una mujer o hombre, con el suo de condiciones, scanf y 
	operaciones aritmeticas
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo float, int	
		* Uso del scanf
		* Uso de condicones 
		* Operaciones aritmeticas
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables de tipo float y int, uso del scanf, uso de condiciones realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 2 variable del tipo int (Mujer(1), Hombre(2))
	El programa calcula e imprime la grasa corporal, ya sea de mujer o hombre
	*/
	
#include<stdio.h>//libreria para el cuerpo de c

int main(){
	//Variables  
	int op;//Variables enteras
	float A1,A2,A3,A4,A5,B, peso,muneca,cintura,cadera,antebrazo, grasa,porcentaje;//Variables con decimal
	//Entrada
	printf("Primero selecciona que sexo eres: \n");//imprime mensaje 
	printf("1.Mujer\n");//imprime mensaje 
	printf("2.Hombre\n");//imprime mensaje 
	printf("Ingrese su opcion:");//imprime mensaje 
	scanf("%d",&op);//lee el numero insertado por el teclado
	//Proceso 
	if(op==1){//condicion, si op es igual a 1
		printf("Por favor introduce tu peso: ");//imprime mensaje
		scanf("%f",&peso);//lee el numero insertado por el teclado
		printf("Por favor introduce la medida exacta de la muñeca: ");//imprime mensaje
		scanf("%f",&muneca);//lee el numero insertado por el teclado
		printf("Por favor introduce la medida de la cintura (a la altura del ombligo): ");//imprime mensaje
		scanf("%f",&cintura);//lee el numero insertado por el teclado
		printf("Por favor introduce la medida exacta de la cadera: ");//imprime mensaje
		scanf("%f",&cadera);//lee el numero insertado por el teclado
		printf("Por favor introduce la medida exacta del antebrazo: ");//imprime mensaje
		scanf("%f",&antebrazo);//lee el numero insertado por el teclado
		A1=(8.987)+peso*0.732;//primera ecuacion 
		A2=muneca/3.140;//segunda ecuacion
		A3=cintura*0.157;//tercera ecuacion
		A4=cadera*0.249;//cuarta ecuacion
		A5=antebrazo*0.434;//quinta ecuacion
		B=A1+A2-A3-A4+A5;//se suman todos los valores
		grasa=peso-B;//calcula la grasa 
		porcentaje=grasa*100/peso;//calcula el porcentaje de grasa 
		//Salida 
		printf("Su grasa corporal es: %.2f\t\n", grasa);//imprime la salida de la grasa
		printf("Su porcentaje de grasa corporal es: %.2f\t\n", porcentaje);//imprime la salida del porcentaje de la grasa
		
	}else if(op==2){//condicion, si op es igual a 2
		printf("Por favor introduce tu peso: ");//imprime mensaje
		scanf("%f",&peso);//lee el numero insertado por el teclado
		printf("Por favor introduce la medida exacta de la muñeca: ");//imprime mensaje
		scanf("%f",&muneca);//lee el numero insertado por el teclado
		A1=(94.42)+peso*1.082;//primera ecuacion 
		A2=muneca*4.15;//segunda ecuacion
		B=A1-A2;//se suman todos los valores
		grasa=peso-B;//calcula la grasa
		porcentaje=grasa*100/peso;//calcula el porcentaje de grasa 
		//Salida 
		printf("Su grasa corporal es: %.2f\t\n", grasa);//imprime la salida de la grasa
		printf("Su porcentaje de grasa corporal es: %.2f\t\n", porcentaje);//imprime la salida del porcentaje de la grasa
		
	}
	return 0;
}
