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

int main(){
	float bmi;
	bienvenida();
	std::string nombre;
	std::cout << "Ingrese su nombre: ";
	std::cin >> nombre;
	bmi = calculoBMI();
	std::cout << std::endl;
	std::cout << "Paciente: " << nombre << ", su BMI es de: " << bmi;
	clasificationBMI(bmi);

	return 0;
}
