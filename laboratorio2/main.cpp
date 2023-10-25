#include <iostream>

using namespace std;

//declaracion de funciones
void menu();
void espera();

int main()
{
    int opcion=0;
    menu();
    cin>>opcion;

    switch (opcion) {
    case 1:  //-> hay que pasar a tinkerkat
    {
        //declaracion de variables
        int dinero=0;
        int contador=0;
        int denominacion[]={50000,20000,10000,5000,2000,1000,500,200,100,50};


        cout<<"Ingrese la cantidad de dinero: "<<endl;
        cout<<"Solo ingrese los numeros, sin ningun punto, coma o espacio "<<endl;
        cin>>dinero;
        system("cls");
        cout<<"la denominacion y la cantidad minima de billetes es: "<<endl;



        while(dinero >= 50){
            for(int i=0; i<10; i++)
            {
                contador = 0;
                while(dinero>=denominacion[i]){
                    contador +=1;
                    dinero-=denominacion[i];}
                //salida
                cout<<denominacion[i] << " = " << contador<< endl;
            }
        }
        if(dinero != 0)
            cout << "Faltante = " << dinero << endl;
        else
            cout <<"Faltante = 0"<<endl;

        espera();
        break;
    }

    case 2:
    {
        //ASCCI - Mayúsculas (65 , 90)
        // VARIABLES PRINCIPALES
        int  aleatorio, Cont_igual=0;
        char AZ[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        char arreglo[200]={};
        char mayuscula = 'A', acumulador;

        // INVOCACIÓN DE FUNCION SRAND
        srand(time(NULL));

        // EJECUCION DEL PROGRAMA
        for(int j=0;j<200;j++){ // j es el contador que itera en cada posicion y la aumenta
            aleatorio = rand()%26; // Genera numero aleatorio entre 0 a 25 dado que las mayusculas estan entre 65 a 90
            acumulador = aleatorio + mayuscula; // Suma el numero aleatorio con el valor numérico de la mayúscula
            arreglo[j] = acumulador; // En la posición j del arreglo, ubica el valor aleatorio generado con anterioridad
            cout << arreglo[j];
        }
        cout << endl;
        //
        for(int x=0;x<26;x++){  // FOR que recorre el arreglo de las mayúsculas 'A' -- 'Z'
            cout<<AZ[x]<<": "; //En este
            Cont_igual=0; // Necesaria para reiniciar el contador iguales
            for(int z=0;z<200;z++){ // FOR que recorre el arreglo de los 200 numeros aleatorios
                if(AZ[x]==arreglo[z]){// CONDICIÓN que evalúa si hay mayúsculas iguales
                    Cont_igual++; // contador que aumenta cada vez que encuentra un valor igual
                }
            }
            cout<<Cont_igual<<endl;
        }
    }



    default:
        break;
    }

    return 0;
}

void espera(){
    system("pause");
    system("cls");
}

void menu(){
    cout<<"Bienbenido a la practica 2 de informatica II"<<endl;
    cout<<"Introduzca el numero del problema que quiere visualizar: "<<endl;
    cout<<"1. Ejercicio de los billetes 2.0 "<<endl;
    cout<<"2. CAdena al azar y contada"<<endl;
    cout<<"3. Comparacion de dos cadenas de caracteres"<<endl;
    cout<<"4. DE cadena de caracteres a un numero entero"<<endl;
    cout<<"5. DE numero entero a una cadena de caracteres"<<endl;
    cout<<"6. Cambiar letras minusculas por mayusculas en una cadena de caracteres"<<endl;
    cout<<"7. Eliminar lo caracteres repetidos de una cadena"<<endl;
    cout<<"8. Separar los numeros de una cadena de caracteres"<<endl;
    cout<<"9. Cadena de caracteres separada en cifras"<<endl;
    cout<<"10. Conversion de numero romano al sistema arabigo"<<endl;
    cout<<"11. REservas de asientos de una sala de cine"<<endl;
    cout<<"12. Cuadrado magico"<<endl;
    cout<<"13. Numero de estrellas encontradas"<<endl;
    cout<<"14. Matriz original y rotada"<<endl;
    cout<<"15. Interseccion entre un par de rectangulos"<<endl;
    cout<<"16. Caminos posibles dentro de una malla"<<endl;
    cout<<"17. Numeros amigables"<<endl;
    cout<<"18. Permutaciones lexicograficas"<<endl;
}
