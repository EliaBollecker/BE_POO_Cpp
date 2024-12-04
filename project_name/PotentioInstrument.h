/*********************************************************************
 * @file  PotentioInstrument.h
 * @author <Elia Bollecker-Fevre et Elise Weltzer>
 * @brief Fichier HEADER de PotentioInstrument, défini un instrument utilisant le potentiomètre
 * @note hérite de la clase instrument 
 *********************************************************************/

#ifndef POTENTIOINSTRUMENT_H 
#define POTENTIOINSTRUMENT_H

#include "Instrumentv2.h"
#include "note_potentio_instrument.h"

#define ROTARY_ANGLE_SENSOR A0  // pin du potention A0=ADC0

class PotentioInstrument : public Instrument {

  protected :
    const float ADC_REF=3.3 ; 
    const long GROVE_VCC=5.0 ; 
    const long FULL_ANGLE=300.0 ; 
    
    
public :
PotentioInstrument(); // initialisation du potentiomètre
void mesureCapteur(); // sert à stocker le résultat de l'angle du potentio dans mesure
float lierNoteMesure() ;  //sert a renvoyer une note de musique grace a l'angle
} ;






#endif
