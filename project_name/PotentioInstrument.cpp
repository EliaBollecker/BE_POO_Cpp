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
    pinMode(ROTARY_ANGLE_SENSOR,INPUT); //configuration de la pin voulue en input


 }

// met à jour la variable mesure avec l'angle actuel mesuré par le potentiomètre
 void PotentioInstrument:: mesureCapteur(){
    long voltage ;
    float test ; 
    long sensor_value=analogRead(ROTARY_ANGLE_SENSOR); // on lit valeur analogique retournée par le potentio //PROBLEM ANALOG_READ
    Serial.println(sensor_value) ; 
    voltage=(long)sensor_value*ADC_REF/1023;
    test=(voltage*FULL_ANGLE)/GROVE_VCC ;
    mesure=(long) test ; 
 }

 // renvoie la note associée à l'angle mesuré
 float PotentioInstrument:: lierNoteMesure() {
    mesureCapteur(); // on met à jour la variable mesure avec l'angle actuel
    NotePotentioInstrument NPI(mesure);
    Serial.println(mesure) ; 
return (NPI.getNote()) ;
 }
