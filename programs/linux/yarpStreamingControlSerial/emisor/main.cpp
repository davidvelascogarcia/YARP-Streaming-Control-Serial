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
    	cout<<"Abriendo puerto de envío con nombre /yarpStreamingControlSerial/data:o"<<endl;
    	puerto_envio.open("/yarpStreamingControlSerial/data:o");
    	Network::connect("/yarpStreamingControlSerial/data:o","/yarpStreamingControlSerial/data:i");
    	cout<<"Conectando..."<<endl;
	Bottle dato;
	
	char orden='0';
	while(orden!='q'){

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
		
		cout<<"Ha seleccionado la opción Activar Modo Autónomo"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 'l':
		
		cout<<"Ha seleccionado la opción Desactivar Modo Autónomo"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 'm':
		
		cout<<"Ha seleccionado la opción Activar Modo Vigía"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 'n':
		
		cout<<"Ha seleccionado la opción Desactivar Modo Vigía"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 'o':
		
		cout<<"Ha seleccionado la opción Activar Modo Control Telemático"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 'p':
		
		cout<<"Ha seleccionado la opción Desactivar Modo Control Telemático"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 'r':
		
		cout<<"Ha seleccionado la opción Activar Modo Análisis"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 's':
		
		cout<<"Ha seleccionado la opción Desactivar Modo Análisis"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 'y':
		
		cout<<"Ha seleccionado la opción Activar Modo Defensa"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 'u':
		
		cout<<"Ha seleccionado la opción Desactivar Modo Defensa"<<endl;
		dato.addString(s);
		puerto_envio.write(dato);
		break;

		case 'q':
		
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







