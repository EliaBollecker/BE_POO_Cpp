#include "AirInstrument.h"
//#include "Ultrasonic.h"

// le constructeur va initialiser le capteur ultrason
AirInstrument::AirInstrument(): Instrument(){

    mesure = 10 ;   
}


// mesure la distance actuelle en fonction de la valeur retournée par le capteur
// ERR on renoie deja une distance sert juste de getter de base pour avoir la mesure captéé par la capteur 
float AirInstrument::get_mesure(){
    return 0.0 ; 
}

//envoie la mesure retournée par le capteur pour traduire la distance en note (en fréquence) pour l'envoyer à la sono 
float AirInstrument::lierNoteMesure() {
    NoteAirInstrument NAI(mesure); 
    cout<<NAI.getNote()<<endl  ; 
    return (NAI.getNote()) ; 
}

