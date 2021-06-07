/*Ingenieria en Sistemas 
  Juan Pablo Salazar Barrios
  Carnet: 0909-20-10990
  Tercer Semestre*/

//Declaracion de libreras 
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

//Declaramos las variables a utilizar
int e_pila;
int opcion;
int pila[1]; //inicializamos el array

//funcion para determinar el tamaño del vector
int size_pila(){
  
  cout<<"\n\n\tIngrese el limite de la Pila Estudiantil: "; 
  cin>>e_pila; //leer variable
}//fin de funcion size_pila

//Insertamos los datos 
int push(){ 

  cout<<"\n\t                   * METODO PUSH *"; //Titulo
  
  //for para ingresar los datos
  for (int i=0; i<e_pila; i++){
  	
    cout<<"\n\tIngrese la calificacion del estudiante " << i+1 << ": "; 
    cin>>pila[i];//leemos los datos ingresados
    
  }
}//fin de funcion push

//Eliminar los datos 
int pop(){ 

  pila[e_pila-1] = 0;//inicio de pila
  
  cout<<"\n\t                *POP*                   ";
  cout <<"\n\t * La calificacion ha sido eliminada *"; //Mensaje a usuario
  _getch();//detener programa
}

//Visualizar los datos 
int mostrar(){

  do{                                            //numero
    cout<<"\n\tCalificacion del estudiante " << e_pila << ": " << pila[e_pila-1];//datos
    e_pila--; }
    while (e_pila!=0);
    cout<<"\n\n";//salto de linea
   _getch(); //detener programa
}

int main(){ 

  do{ system("color 1A"); //Color de la pantalla
      system("cls"); //limpiar la pantallla
  
             //visualizar menu de opciones 
    cout<<"\n\t*********************************";
    cout<<"\n\t*        MENU PRINCIPAL         *";
    cout<<"\n\t*********************************";
    cout<<"\n\t* 1. Establecer tamano de array *";
    cout<<"\n\t* 2. Funcion PUSH               *";
    cout<<"\n\t* 3. Funcion POP                *";
    cout<<"\n\t* 4. Visualizar pila            *";
    cout<<"\n\t* 5. Finalizar                  *";
    cout<<"\n\t*********************************";
  
    cout<<"\n\t Elige una Opcion: ";
    cin>>opcion; //leer opcion
    system("cls"); //Limpiamos la pantalla
    
    switch(opcion){
    	
      case 1: system("cls"); //Limpiamos la pantalla
        size_pila(); //Implementacion de la funcion size_pila
        break;
        
      case 2:system("cls"); //Limpiamos la pantalla
        push(); //Implementacion de la funcion push
        break;
        
      case 3:system("cls"); //Limpiamos la pantalla
        pop(); //Implementacion de la funcion pop
        break;
        
      case 4:system("cls"); //Limpiamos la pantalla
        mostrar(); //Implementacion de la funcion mostrar
        break;
        
      case 5: break; //Evitamos que ingrese a la opcion de error
        
      default:{ system("color C0");//color de pantalla
      
		cout<<"\tERROR: El numero que ingreso es incorrecto!"; //Mensaje de error 
		_getch();//detener el porgrama para leer
		 break; }//mensaje de error
    }//fin default
  } while(opcion!=5);
}//fn de main 

/*Ingenieria en Sistemas 
  Juan Pablo Salazar Barrios
  Carnet: 0909-20-10990
  Tercer semestre*/

