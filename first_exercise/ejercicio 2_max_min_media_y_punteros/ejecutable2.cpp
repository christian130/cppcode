// ejecutable2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h> 
#include <sstream>
#include <new>
#include <string>

char s;
/*class ClaseGenerica
{
    int* ptr = nullptr;
public:
    ClaseGenerica() :ptr(new int(0)) {
    
    } // Constructor por defecto, la sintaxis equivale a *ptr = 0
    ClaseGenerica(int a) :ptr(new int(a)) {} // Constructor parametrizado, la sintaxis equivale a *ptr = a
    ClaseGenerica(const ClaseGenerica& c) :ptr(new int(*(c.ptr))) {} // Constructor de copia, la sintaxis equivale a *ptr = *(c.ptr)
    ~ClaseGenerica() { delete ptr; } // Liberando la memoria en el destructor
    void hacerCalculos() {
        
        
        std::cout << "*ptr = " << *ptr << std::endl; }

};*/
int ntotales;
float* minimo, * media;
void calculos(int n) {
    int* arrayName = new int[n];
    for (int i = 0; i < ntotales; i++) {

        std::cout << "introducir numero " << i << std::endl;
        std::string nuevaLinea;
        while (std::getline(std::cin, nuevaLinea))
        {
            std::stringstream nuevoStreamObject(nuevaLinea);
            //*maximo[i] = new float[ntotales];
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
    for (int i = 0; i < ntotales;i++) {
        if (arrayName[i]<minimo) {
            minimo = arrayName[i];
        }
        if (arrayName[i]>maximo) {
            maximo = arrayName[i];            
        }
        sumatoria += arrayName[i];

    }
    float media = sumatoria / ntotales;
    
    std::cout << "************************************El maximo valor es\n" << maximo << std::endl;
    std::cout << "************************************El minimo valor es\n" << minimo << std::endl;
    std::cout << "************************************la media aritmetica de estos son \n" << media << std::endl;
    delete[] arrayName;
    std::cout << "************************************Desea Continuar? S/N";
    std::cin >> &s;
   
}
void numeroDatos(bool repetir) {
    
    std::cout << "Ingrese por favor el numero de datos que va se va a calcular!\n";
    std::string nuevaLinea;

    while (std::getline(std::cin, nuevaLinea))
    {
        std::stringstream nuevoStreamObject(nuevaLinea);
        if (nuevoStreamObject >> ntotales)
        {
            calculos(ntotales);
            break;
        }
        std::cin.clear(); 
        if (repetir == false) {
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
        //} while ((s == 's' || s == 'S'));

    
   /* std::cout << "Ingrese por favor el numero de datos que va se va a calcular!\n";
    std::string nuevaLinea;
    int *ntotales;
    while((s == 's' || s == 'S')) {
                    calculos(ntotales);
                }
    int maximo = maximo;
    float *minimo, *media;
    
    while (std::getline(std::cin, nuevaLinea))
    {
        std::stringstream nuevoStreamObject(nuevaLinea);
        if (nuevoStreamObject >> *ntotales)
        {
            
            //maximo=maximo[ntotales];
            if (nuevoStreamObject.eof())
            {
                    
                //maximo = maximo[&ntotales];
                

                break;
            }
        }
        std::cin.clear();
        std::cout << "por favor introducir solo numeros reales \nIngrese por favor el numero de datos que va se va a calcular!\n" << std::endl;
    }
    int b = 1;
    //maximo = new float[ntotales];
    //int numerosArray[ntotales] ;
    
    for (int i=0;i<ntotales;i++) {
        
    std::cout << "introducir numero "<< b++ <<std::endl;
    while (std::getline(std::cin, nuevaLinea))
    {
        std::stringstream nuevoStreamObject(nuevaLinea);
        //*maximo[i] = new float[ntotales];
        if (nuevoStreamObject >> maximo[i])
        {

            if (nuevoStreamObject.eof())
            {

                break;
            }
        }
        std::cin.clear();
        std::cout << "por favor introducir solo numeros reales \nIngrese por favor el numero de datos que va se va a calcular!\n" << std::endl;
    }

    }
    std::cout << "primer numero\n"<<maximo;
    //delete maximo;
    
    return 0;*/
