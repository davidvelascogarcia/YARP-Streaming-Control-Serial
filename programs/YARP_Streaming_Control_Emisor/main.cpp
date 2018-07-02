//****************************************************
//****************************************************
//
//              YARP: Streaming Control
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
#include <yarp/os/all.h>
#include <yarp/sig/all.h>
#include <opencv2/opencv.hpp>
#include <yarp/sig/Image.h>


// Espacios de nombres

using namespace yarp::os;
using namespace yarp::sig;
using namespace yarp::sig::draw;
using namespace cv;
using namespace std;

int main()
{
	cout<< "Bienvenido al controlador en streaming vía YARP"<<endl;
    	cout<<endl;
    	cout<<endl;
    	Network yarp;
    	cout<<"Iniciando red de YARP..."<<endl;
    	Port puerto_envio;  	
    	cout<<"Iniciando cliente..."<<endl;
    	cout<<"Abriendo puerto de envío con nombre /emisor_control"<<endl;
    	puerto_envio.open("/emisor_control");
    	Network::connect("/emisor_control","/receptor_control");
    	cout<<"Conectando..."<<endl;
	Bottle dato;
	
	char orden='0';
	while(orden!='l'){

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
	cout<<"k. Modo B"<<endl;
	cout<<"l. Desconectar"<<endl;
	dato.clear();
	cout<<endl;
	cin>>orden;

	stringstream ss;
	string s;	
	ss << orden;
	ss >> s;

	cout<<endl;
	switch(orden){

		case 'a':

		cout<<"Ha seleccionado la opción Adelante"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 'b':

		cout<<"Ha seleccionado la opción Atrás"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 'c':

		cout<<"Ha seleccionado la opción Derecha"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 'd':

		cout<<"Ha seleccionado la opción Izquierda"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 'e':

		cout<<"Ha seleccionado la opción Girar a la derecha"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 'f':

		cout<<"Ha seleccionado la opción Girar a la izquierda"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 'g':

		cout<<"Ha seleccionado la opción Mirar a la derecha"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 'h':

		cout<<"Ha seleccionado la opción Mirar a la izquierda"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 'i':
				
		cout<<"Ha seleccionado la opción Mirar hacia arriba"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 'j':
		
		cout<<"Ha seleccionado la opción Mirar hacia abajo"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;
		
		case 'k':
		
		cout<<"Ha seleccionado la opción Modo B"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;


		case 'l':
		
		cout<<"Ha seleccionado la opción Desconectar"<<endl;

		break;

		default:
		
		cout<<"Lo siento la opción seleccionada no es correcta, vuelva a intentarlo"<<endl;

		break;

} 
		cout<<endl; 
}
    return 0;

}







