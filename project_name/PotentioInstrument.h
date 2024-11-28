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

#define ROTARY_ANGLE_SENSOR A0  // pin du potentio
#define ADC_REF 5             // voir si c'est pas du 3.3V
#define GROVE_VCC 5           // VCC du potention
#define FULL_ANGLE 300         // angle max du potentio

class PotentioInstrument : public Instrument {

protected :

public :
PotentioInstrument(); // initialisation du potentiomètre
void mesureCapteur(); // sert à stocker le résultat de l'angle du potentio dans mesure
float lierNoteMesure() ;  //sert a renvoyer une note de musique grace a l'angle
} ;






#endif