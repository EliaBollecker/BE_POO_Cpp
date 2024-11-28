/*********************************************************************
 * @file  note.h
 * @author <Elia Bollecker-Fevre et Elise Weltzer>
 * @brief Fichier header de Note_air_instrument permet de renvoyer la bonne note pour l'air instrument  
 *********************************************************************/
#ifndef NOTEAIRINSTRUMENT_H
#define NOTEAIRINSTRUMENT_H 

#include "note.h"
#include "AirInstrument.h" 
#include "Instrumentv2.h" 
//#include <iostream>

using namespace std ; 

class NoteAirInstrument : public Note {
    protected : 

    public : 
        NoteAirInstrument(long mesure ) ; //initilise une nouvelle note jouer par un air Instrument avec une mesure 
        float getNote() ; //traduit la distance mesuree en note 

}; 


#endif 
