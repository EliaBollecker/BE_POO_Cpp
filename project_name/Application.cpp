/*********************************************************************
 * @file  Apllication.cpp
 * @author <Elia Bollecker-Fevre et Elise Weltzer>
 * @brief Fichier source de l'application
 *********************************************************************/
#include "Application.h"
#include <cppQueue.h>



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
  noTone(0) ; 
}


void Application::run(void)
{
  AirInstrument AI ;
  Reccord Sauv(&AI) ; 
  Sauv.enregistrer() ; 
  Sauv.jouer() ;  
  
}
