/*********************************************************************
 * @file  Apllication.cpp
 * @author <Elia Bollecker-Fevre et Elise Weltzer>
 * @brief Fichier source de l'application
 *********************************************************************/
#include "Application.h"
#include <cppQueue.h>
//#include "fexceptions.h"


Application::Application()
{
  // Code
  ; 
}
  
Application::~Application()
{
  // Code
  ;
}  

void Application::init(void)
{
  Serial.begin(9600);
  pinMode(13,INPUT) ; //Ultrasonic Ranger D7=GPIO13
  pinMode(A0,INPUT) ; //Potentiometre A0=ADC0
  pinMode(15,INPUT) ; //TouchSensor D8=GPIO15
  pinMode(0,OUTPUT) ; //Buzzer D3=GPPIO0
  noTone(0) ; 
}


void Application::run(void)
{
  try{
    Serial.println("Appuyez sur le Touch Sensor pour utiliser le Potentio Instrument"); 
    Serial.println("N'apuuyez pas sur le Touch Sensor pour utiliser l'Air Instrument"); 
    delay(5000) ; //delais de 5s pour choisir l'instruement 
    int SensorValue = digitalRead(15); //Touch Sensor sur D8=GPIO15
    if (SensorValue==1){
      Serial.println(SensorValue); 
      Serial.println("Vous utilisez le Potentio Instrument"); 
      delay(5000) ; //delai de 5s pour permettre a l'utilisateur.trice de mettre sa main sur l'instruement 
      PotentioInstrument AI ;
      Reccord Sauv(&AI) ; 
      Sauv.enregistrer() ; 
      Sauv.jouer() ;  
    }
    else if(SensorValue==0){
      Serial.println(SensorValue); 
      Serial.println("Vous utilisez l'Air Instrument"); 
      delay(5000) ; //delai de 5s pour permettre a l'utilisateur.trice de mettre sa main sur l'instruement 
      AirInstrument AI ;
      Reccord Sauv(&AI) ; 
      Sauv.enregistrer() ; 
      Sauv.jouer() ; 
    }
  } catch(int err){
      switch(err) {
        case (1) : 
          Serial.println("Probleme distance messuree negative" ) ;
          break; 
        case(2) : 
           Serial.println("Probleme distance mesuree trop grande" ) ; 
           break ;
        case(3) : 
          Serial.println("Probleme angle negatif" ) ;
          break ; 
        case(4) :
          Serial.println("Probleme angle maximum atteint" ) ;
          break ; 
        case(5) : 
          Serial.println("Prbleme enregistrement vide");
          break ; 
      }
  }
  }
