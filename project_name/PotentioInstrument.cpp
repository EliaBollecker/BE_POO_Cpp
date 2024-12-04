/*********************************************************************
 * @file  PotentioInstrument.cpp
 * @author <Elia Bollecker-Fevre et Elise Weltzer>
 * @brief Fichier code de PotentioInstrument, défini un instrument utilisant le potentiomètre
 * @note hérite de la clase instrument 
 *********************************************************************/

 #include "PotentioInstrument.h"

// le constructeur va initialiser les capteur potentiomètre
 PotentioInstrument::PotentioInstrument(): Instrument(){
    type_mesure='a';
    Serial.begin(9600);
    //pinMode(ROTARY_ANGLE_SENSOR,INPUT); //configuration de la pin voulue en input


 }

// met à jour la variable mesure avec l'angle actuel mesuré par le potentiomètre
 void PotentioInstrument:: mesureCapteur(){
    float voltage ;
    float test ; 
    int sensor_value=analogRead(ROTARY_ANGLE_SENSOR); // on lit valeur analogique retournée par le potentio 
    Serial.println(sensor_value) ; 
    voltage=(float)((sensor_value*ADC_REF)/1023.00);
    test=(voltage*FULL_ANGLE)/GROVE_VCC ;
    mesure=(long) test ; 
 }

 // renvoie la note associée à l'angle mesuré
 float PotentioInstrument:: lierNoteMesure() {
    noTone(0) ;
    mesureCapteur(); // on met à jour la variable mesure avec l'angle actuel
    NotePotentioInstrument NPI(mesure);
    Serial.println(mesure) ; 
    tone(0,NPI.getNote()) ; 
return (NPI.getNote()) ;
 }
