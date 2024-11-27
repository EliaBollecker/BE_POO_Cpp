#include "AirInstrument.h"
#include "Ultrasonic.h"

// le constructeur va initialiser le capteur ultrason
AirInstrument::AirInstrument(): Instrument(){
    Ultrasonic capteur(13) ; // on relie le capteur à la pin D7(GPIO13)
    Serial.begin(9600) ; // pour afficher la mesure sur le terminal arduino   
}


// mesure la distance actuelle en fonction de la valeur retournée par le capteur
void AirInstrument::mesureCapteur(){
    mesure=capteur.MeasureInCentimeters();
    Serial.print(mesure); // afficher mesure dans le terminal arduino
}

//envoie la mesure retournée par le capteur pour traduire la distance en note (en fréquence) pour l'envoyer à la sono 
float AirInstrument::lierNoteMesure() {
    mesureCapteur();
    NoteAirInstrument NAI(mesure); 
    cout<<NAI.getNote()<<endl  ; 
    return (NAI.getNote()) ; 
}

