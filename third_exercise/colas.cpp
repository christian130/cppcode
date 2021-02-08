#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>        
#include <cstdlib>      
#include <math.h>
#include <stdio.h>
#include <stdlib.h> 
#include <sstream>
#include <new>
#include <string>

using namespace std;
void generar_numeros_aleatorios_sin_repeticion();
void mostrar();
void ingreso(int numero);
void eliminar();
void buscar();
void comienzo();
void Clear();
vector<int> v;
vector<int> v2;
vector<int> myvector;
struct datos
{
	int dato;
	datos* direccion_sig;
}*primero, * cola, * ultimo = NULL;
int* arrayName = new int[100];
int opcion;
void Clear()
{
#if defined _WIN32
	system("cls");
	//clrscr(); // including header file : conio.h
#elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
	system("clear");
	//std::cout<< u8"\033[2J\033[1;1H"; //Using ANSI Escape Sequences 
#elif defined (__APPLE__)
	system("clear");
#endif
}
void comienzo() {
	
	
		cout << "escribe 1 para generar datos aleatorios que componen los numeros del 1 al 500 en una cola de 100" << endl;
		cout << "escribe 2 para mostrar datos de la cola ordenados en forma ascendente" << endl;		
		cout << "escribe 3 para volver a comenzar" << endl;
		cout << "*********ESCRIBA CUALQUIER OTRA TECLA PARA SALIR********" << endl;
		
		cin >> opcion;
		switch (opcion) {
		case 1: {
			generar_numeros_aleatorios_sin_repeticion();
			ingreso(100);
			comienzo();
			break;
		}
		case 2: {
			mostrar();
			comienzo();
			break;
		}
		case 3: {
			eliminar();
			Clear();
			comienzo();
				break;
		}


	}
}
int main()
{

	
	/*std::cout << "Ingrese por favor el numero de datos que va se va a calcular !" << std::endl;
	std::cout << "No ingresar los numeros 0 y 1 !" << std::endl;
	std::cout << "El maximo es el numero 100 y es una constante" << std::endl;*/
	comienzo();
	std::string nuevaLinea;



	while (std::getline(std::cin, nuevaLinea))
	{
		std::stringstream nuevoStreamObject(nuevaLinea);
		if ((nuevoStreamObject >> opcion))
		{
			if (nuevoStreamObject.eof())
			{

				break;
			}
			
		}
		std::cin.clear();
		

	}
		
		return 0;

	

	
	
}
int myrandom(int i) { return std::rand() % i; }
void generar_numeros_aleatorios_sin_repeticion() {
	std::srand(unsigned(std::time(0)));
	
	for (int i = 500; i > 0; --i) v.push_back(i); 
	
	
	std::random_shuffle(v.begin(), v.end(), myrandom);
	for (int u = 0; u < 100; ++u) {
		myvector.push_back(v[u]);

	}
	
}
void ingreso(int n) {

	sort(myvector.begin(), myvector.end(), greater<int>());
	for (auto& e2 : myvector) { // este es un foreach
		cola = new(datos);
		cola->dato = e2;

		if (ultimo != NULL) {
			ultimo->direccion_sig = cola;
			cola->direccion_sig = NULL;
			ultimo = cola;
			cout << "Dato Ingresado " << endl;
		}
		else {
			primero = ultimo = cola;
			cout << "primer dato ingresado" << endl;
			cout << primero << " " << ultimo << " " << cola << endl;
		}
	}
	
	
	/**/
	/*cout << "numero NO repetido" << endl;
	for (int pp = 0; pp < n; pp++) {
		cout << arrayName[pp] << endl;
	}*/
	//int arrSize = sizeof(arrayName)/sizeof(arrayName[0]);

	

	//cout << "Ingrese dato a la cola" << endl;

	//cin >> cola->dato;

	//cout << ultimo->direccion_sig << " " << cola->direccion_sig << endl;

}
void mostrar() {
	if (ultimo == NULL) {
		cout << "La cola esta vacia" << endl;
		return;
	}
	cola = primero;
	cout << "Los dato de la cola son; " << endl;
	//int g = 0;
	while (cola != NULL) {
		//g++;

		cout << cola->dato << endl;
		//v.push_back(cola->dato);
		//	v.insert(v.begin(), cola->dato);
		cola = cola->direccion_sig;

	}
	//std::sort(v.begin(), v.end());
	//for (auto& e : v) {
		//cout << e << endl;
	//}
	/*for (int h=0;h<100;h++) {

	}*/

}
void eliminar() {
	if (primero != NULL) {
		cola = primero;
		//cout << "Eliminado " << primero->dato << endl;
		primero = cola->direccion_sig;
		delete(cola);
		if (primero == NULL) {
			cola = NULL;
			ultimo = NULL;
		}
	}
	else {
		//cout << "La cola esta vacia" << endl;
	}
}
void buscar() {
	if (primero == NULL) {
		cout << "La cola esta vacia" << endl;
		return;
	}
	cola = primero;
	bool encontrado = false;
	int buscardatos;
	cout << "Ingrese dato a buscar" << endl;
	cin >> buscardatos;
	while (cola != NULL) {
		if (buscardatos == cola->dato) {
			cout << "Encontrado, el dato es; " << cola->dato << endl;
			encontrado = true;
			break;
		}
		cola = cola->direccion_sig;
	}
	if (encontrado == false) {
		cout << "No se encontro el dato" << endl;
	}

}