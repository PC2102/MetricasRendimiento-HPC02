/*******************************************************************
 * Fecha: 27 de Julio de 2022
 * Autor: Pedro Cardenas
 * Materia: Introducción HPC
 * Tema: Lenguaje de Programación C++
 * Tópico: Aplicación para el Cálculo del Indice de Masa Corporal
 * *****************************************************************/

#include "bmi_lib.h"
#include <stdio.h>
#include <iostream>
#include <math.h>


void bienvenida(){
	std::cout << "=========================================================" << std::endl;
	std::cout << std::endl;
	std::cout << "      -Calculador del Indice de Masa Corporal-		" << std::endl;
	std::cout << std::endl;
	std::cout << "=========================================================" << std::endl;
	std::cout << std::endl;
}

float calculoBMI(){
	float masa, altura;
	/*Ingreso del dato de masa corporal en kg*/
	std::cout << "Ingrese su masa corporal en kg: ";
	std::cin >> masa;
	std::cout << std::endl;
	/*Ingreso del dato de altura corporal en centimetros*/
	std::cout << "Ingrese su altura en cm: ";
	std::cin >> altura;
	std::cout << std::endl;
	/*Calculo del Indice de Masa Corporal = masa/(altura*altura*100) */
	return masa/(pow(altura/100,2));
}

void clasificationBMI(float bmiC){
	/* Clasificación de BMI */
	if (bmiC<=18.5)
		std::cout <<  " tiene 'Delgadez Extrema'" << std::endl;
	else if (bmiC<=24.9)
		std::cout <<  " tiene 'un rango de peso Saludable'" << std::endl;
	else if (bmiC<=29.9)
		std::cout <<  " tiene 'Sobre Peso'" << std::endl;
	else if (bmiC<=34.9)
		std::cout <<  " tiene 'Obesidad Clase I'" << std::endl;
	else if (bmiC<=39.9)
		std::cout <<  " tiene 'Obesidad Clase II'" << std::endl;
	else 
		std::cout <<  " tiene 'Obesidad Clase III'" << std::endl;
}

