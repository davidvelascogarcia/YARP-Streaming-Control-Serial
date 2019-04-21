//****************************************************
//****************************************************
//
//              YARP-TELNET: Streaming Control
//
//              Tipo: Emisor
//
//              Autor: David Velasco García
//		       @davidvelascogarcia
//
//****************************************************
//****************************************************

// Librerias

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

// Espacio de nombres
using namespace std;

// Función main
int main(){

// Variables
string IP="";
string puerto="";

// Bienvenida
cout<<"Bienvenido al controlador YARP emisor vía Telnet"<<endl;
cout<<"Por favor, introduzca la dirección IP del puerto de YARP a controlar"<<endl;
cin>>IP;
cout<<endl;
cout<<"Por favor, introduzca el puerto a controlar"<<endl;
cin>>puerto;
cout<<endl;
cout<<"Configurando..."<<endl;
cout<<"Configuración establecida correctamente"<<endl;
cout<<endl;
cout<<"Se iniciará el cliente Telnet, configurelo introduciendo:"<<endl;
cout<<"CONNECT bar"<<endl;
cout<<"Para enviar un comando escriba d y posteriormente enter"<<endl;
cout<<"Adicionalmente introduzca la orden concreta, se le mostrará un listado"<<endl;
cout<<"Repita el proceso para cada orden:"<<endl;
cout<<endl;

cout<<"¿Qué desea hacer?, escriba la orden y presione enter."<<endl;
    	cout<<"a. Adelante"<<endl;
	cout<<"b. Atrás"<<endl;
	cout<<"c. Derecha"<<endl;
	cout<<"d. Izquierda"<<endl;
	cout<<"e. Girar derecha"<<endl;
	cout<<"f. Girar izquierda"<<endl;
	cout<<"g. Mirar a la derecha"<<endl;
	cout<<"h. Mirar a la izquierda"<<endl;
	cout<<"i. Mirar hacia arriba"<<endl;
	cout<<"j. Mirar hacia abajo"<<endl;
	cout<<"k. Activar modo autónomo"<<endl;
	cout<<"l. Desactivar modo autónomo"<<endl;
	cout<<"m. Activar modo vigía"<<endl;
	cout<<"n. Desactivar modo vigía"<<endl;
	cout<<"o. Activar modo control telemático"<<endl;
	cout<<"p. Desactivar modo control telemático"<<endl;
	cout<<"r. Activar modo análisis"<<endl;
	cout<<"s. Desactivar modo análisis"<<endl;
	cout<<"y. Activar modo defensa"<<endl;
	cout<<"u. Desactivar modo defensa"<<endl;
	cout<<"q. Desconectar"<<endl;
cout<<endl;
string comando="telnet "+IP+" "+puerto;
system(comando.c_str());

}
