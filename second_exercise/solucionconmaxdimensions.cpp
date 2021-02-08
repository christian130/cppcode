#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h> 
#include <sstream>
#include <new>
#include <string>

char s;

int ntotales;
int const MAX_DIMENSION = 100;
void calculos(int n) {
	int* arrayName = new int[MAX_DIMENSION]; // aqui se define la tabla estatica con max_dimensions   
	for (int i = 0; i < n; i++) {

		std::cout << "introducir numero " << i + 1 << std::endl;
		std::string nuevaLinea;
		while (std::getline(std::cin, nuevaLinea))
		{
			std::stringstream nuevoStreamObject(nuevaLinea);
			if (nuevoStreamObject >> arrayName[i])
			{

				if (nuevoStreamObject.eof())
				{

					break;
				}
			}
			std::cin.clear();
			std::cout << "por favor introducir solo numeros reales \nintroducir numero" << i << std::endl;
		}
	}
	int maximo = arrayName[0];
	int minimo = arrayName[1];
	int sumatoria = 0;
	for (int i = 0; i < ntotales; i++) {
		if (arrayName[i] < minimo) {
			minimo = arrayName[i];
		}
		if (arrayName[i] > maximo) {
			maximo = arrayName[i];
		}

	}	
	std::cout << "************************************El maximo numero es\n" << maximo << std::endl;
	std::cout << "************************************El minimo numero es\n" << minimo << std::endl;
	delete[] arrayName;
	std::cout << "************************************Desea Continuar? S/N";
	std::cin >> &s;

}
void numeroDatos(bool repetir) {

	std::cout << "Ingrese por favor el numero de datos que va se va a calcular !" << std::endl;
	std::cout << "No ingresar los numeros 0 y 1 !" << std::endl;
	std::cout << "El maximo es el numero 100 y es una constante" << std::endl;
	std::string nuevaLinea;



	while (std::getline(std::cin, nuevaLinea))
	{
		std::stringstream nuevoStreamObject(nuevaLinea);
		if ((nuevoStreamObject >> ntotales) && (ntotales < MAX_DIMENSION) && !(ntotales == 0) && !(ntotales == 1))
		{
			calculos(ntotales);
			break;
		}
		std::cin.clear();
		if ((repetir == false)) {
			std::cin.clear();
			std::cout << "por favor introducir solo numeros reales \nIngrese por favor el numero de datos que va se va a calcular!\n" << std::endl;


		}
		repetir = false;

	}

}
int main()
{
	numeroDatos(false);


	while ((s == 's' || s == 'S')) {
		std::cin.clear();
		numeroDatos(true);


	}
}

