//****************************************************
//****************************************************
//
//              YARP: Streaming Control
//
//              Tipo: Receptor
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
#include <opencv/cv.h>
#include <opencv/cvaux.h>
#include <opencv/highgui.h>
#include <stdio.h>
#include "Serial.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <locale>
#include <sstream>

// Espacios de nombres

using namespace yarp::os;
using namespace yarp::sig;
using namespace yarp::sig::draw;
using namespace cv;
using namespace std;

int main()
{
    cout<< "Bienvenido al controlador de streaming vía YARP, modo receptor"<<endl;
    cout<<endl;
    cout<<endl;
    Network yarp;
    cout<<"Iniciando red de YARP"<<endl;
    Port puerto_receptor;
    puerto_receptor.open("/yarpStreamingControlSerial/data:i");
    cout<<"Esperando órdenes..."<<endl;	
    Serial com("/dev/ttyS1",9600,8,'N',1); 
    cout<<"Preparando sub-comunicación serie"<<endl;
    cout<<"Preparada"<<endl;	
    cout<<"Abriendo puerto ";
    cout<<com.GetPort().c_str();
    cout<<"..."<<endl;
    bool successFlag;

 if (com.Open() == 0) {
	 cout<<"Puerto abierto corrrectamente"<<endl;
 }
 else {
	 cout<<"Lo siento, no he podido abrir el puerto, revise la conexión"<<endl;
	 return 1;
 }

    while (true) {

        Bottle dato;
	puerto_receptor.read(dato);
        string datos=dato.toString();
	if(datos=="a"){
	cout<<"Moviendo hacia adelante"<<endl;
	successFlag=com.WriteChar('a'); 
	}
	if(datos=="b"){
	cout<<"Moviendo hacia atrás"<<endl;
	successFlag=com.WriteChar('b'); 
	}
	if(datos=="c"){
	cout<<"Moviendo hacia la derecha"<<endl;
	successFlag=com.WriteChar('c'); 
	}
	if(datos=="d"){
	cout<<"Moviendo hacia la izquierda"<<endl;
	successFlag=com.WriteChar('d'); 
	}
	if(datos=="e"){
	cout<<"Girando hacia la derecha"<<endl;
	successFlag=com.WriteChar('e'); 
	}
	if(datos=="f"){
	cout<<"Girando hacia la izquierda"<<endl;
	successFlag=com.WriteChar('f'); 
	}
	if(datos=="g"){
	cout<<"Mirando hacia la derecha"<<endl;
	successFlag=com.WriteChar('g'); 
	}
	if(datos=="h"){
	cout<<"Mirando hacia la izquierda"<<endl;
	successFlag=com.WriteChar('h'); 
	}
	if(datos=="i"){
	cout<<"Mirando hacia arriba"<<endl;
	successFlag=com.WriteChar('i'); 
	}
	if(datos=="j"){
	cout<<"Mirando hacia abajo"<<endl;
	successFlag=com.WriteChar('j'); 
	}
	if(datos=="k"){
	cout<<"Activando modo autónomo"<<endl;
	successFlag=com.WriteChar('k'); 
	}
	if(datos=="l"){
	cout<<"Desactivando modo autónomo"<<endl;
	successFlag=com.WriteChar('l'); 
	}
	if(datos=="m"){
	cout<<"Activando modo vigía"<<endl;
	successFlag=com.WriteChar('m'); 
	}
	if(datos=="n"){
	cout<<"Desactivando modo vigía"<<endl;
	successFlag=com.WriteChar('n'); 
	}
	if(datos=="o"){
	cout<<"Activando modo control telemático"<<endl;
	successFlag=com.WriteChar('o'); 
	}
	if(datos=="p"){
	cout<<"Desactivando modo control telemático"<<endl;
	successFlag=com.WriteChar('p'); 
	}
	if(datos=="r"){
	cout<<"Activando modo análisis"<<endl;
	successFlag=com.WriteChar('r'); 
	}
	if(datos=="s"){
	cout<<"Desactivando modo análisis"<<endl;
	successFlag=com.WriteChar('s'); 
	}
	if(datos=="y"){
	cout<<"Activando modo defensa"<<endl;
	successFlag=com.WriteChar('y'); 
	}
	if(datos=="u"){
	cout<<"Desactivando modo defensa"<<endl;
	successFlag=com.WriteChar('u'); 
	}
	if(datos=="q"){
	cout<<"Desconectando..."<<endl;
	successFlag=com.WriteChar('q'); 
	}
   }
	cout<<"Cerrando puerto ";
 	cout<<com.GetPort().c_str();
	cout<<"..."<<endl;
	com.Close();

    	return 0;
}

