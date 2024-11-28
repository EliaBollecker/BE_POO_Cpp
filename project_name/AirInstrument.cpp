#include "AirInstrument.h"
#include <Ultrasonic.h>

// le constructeur va initialiser le capteur ultrason
AirInstrument::AirInstrument(): Instrument(),ultrasonic(13){
    //ultrasonic(13) ; // on relie le capteur à la pin D7(GPIO13)
     
}


// mesure la distance actuelle en fonction de la valeur retournée par le capteur
void AirInstrument::mesureCapteur(){
    mesure=ultrasonic.MeasureInCentimeters();
    Serial.println(mesure); // afficher mesure dans le terminal arduino
}

//envoie la mesure retournée par le capteur pour traduire la distance en note (en fréquence) pour l'envoyer à la sono 
float AirInstrument::lierNoteMesure() {
    mesureCapteur();
    NoteAirInstrument NAI(mesure); 
    //cout<<NAI.getNote()<<endl  ; 
    return (NAI.getNote()) ; 
}

void AirInstrument::AirInstrument_init(){
  //Serial.begin(9600) ; // pour afficher la mesure sur le terminal arduino  
}
