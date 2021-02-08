// ecuacion_segundo_grado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h> 
#include <sstream>
float a, b, c, determinante, x_1, x_2,imaginarioX_1,imaginarioX_2;
char s;
int main()
{  
  
    do {
        std::cout << "Ingrese los valores de a,b,c de la siguiente expresion:" << std::endl;
        std::cout << "ax²+ bx + c =0:" << std::endl;
        std::cout << "Ingrese a:" << std::endl;        
        std::string nuevaLinea;
        // obtenemos el input en cadena de texto e iteramos sobre el, para detectar que en esencia todos los caracteres que hayan entrado son numericos
        while (std::getline(std::cin, nuevaLinea))
        {
            std::stringstream nuevoStreamObject(nuevaLinea);
            if (nuevoStreamObject >> a)
            {
                if (nuevoStreamObject.eof())
                {  

                    break;
                }
            }
            std::cin.clear();
            std::cout << "por favor introducir solo numeros reales \nIngrese a:" << std::endl;
        }

        std::cout << "Ingrese b:" << std::endl;       
        while (std::getline(std::cin, nuevaLinea))
        {
            std::stringstream nuevoStreamObject(nuevaLinea);
            if (nuevoStreamObject >> b)
            {
                if (nuevoStreamObject.eof())
                {

                    break;
                }
            }
            std::cin.clear();
            std::cout << "por favor introducir solo numeros reales \nIngrese b:" << std::endl;
        }
        

        std::cout << "Ingrese c:" << std::endl;
        while (std::getline(std::cin, nuevaLinea))
        {
            std::stringstream nuevoStreamObject(nuevaLinea);
            if (nuevoStreamObject >> c)
            {
                if (nuevoStreamObject.eof())
                {

                    break;
                }
            }
            std::cin.clear();
            std::cout << "por favor introducir solo numeros reales \nIngrese c:" << std::endl;
        }
       



        determinante = b * b - 4.00 * (a * c);
        if (determinante > 0) {
            if (a==0) {
                std::cout << "todo numero dividido entre 0 tiende al infinito \n por lo tanto hablamos de una indeterminacion \n entonces X_1 y X_2 = infinito ";
            }
            else {
                x_1 = (-b + (pow(determinante, 0.5))) / (2 * a);
                x_2 = (-b - (pow(determinante, 0.5))) / (2 * a);
                std::cout << "x_1 =" << x_1 << "\n";
                std::cout << "x_2 =" << x_2 << "\n";
            }
            
        }
        if (determinante == 0) {
            x_1 = (-b) / (2 * a);
            x_2 = x_1;
            std::cout << "ambos resultados de la ecuacion de segundo grado (X1 y X2) son iguales a X_1=" << std::abs(x_1) << "y X_2=" << x_2;

        }
        if (determinante < 0) {
            x_1 = (-b) / (2 * a);
            x_2 = (-b) / (2 * a);
            determinante = (-1) * determinante;
            imaginarioX_1 = (pow(determinante, 0.5)) / (2 * a);
            imaginarioX_2 = ((-1) * pow(determinante, 0.5)) / (2 * a);
            std::cout << "la determinante de la raiz cuadrada es negativa por lo tanto incluye los numeros imaginarios \n";
            std::cout << x_1 << "+" << imaginarioX_1 << "i\n";
            std::cout << x_2 << "+" << imaginarioX_2 << "i\n";

        }
        std::cout << "Desea Continuar? S/N\n";
        std::cin >> &s;
        

    } while (s == 's' || s=='S');
   
    return 0;

    
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
