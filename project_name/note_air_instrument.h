/*********************************************************************
 * @file  note.h
 * @author <Elia Bollecker-Fevre et Elise Weltzer>
 * @brief Fichier header de Note_air_instrument permet de renvoyer la bonne note pour l'air instrument  
 *********************************************************************/
#ifndef NOTEAIRINSTRUMENT_H
#define NOTEAIRINSTRUMENT_H 

#include "note.h"
#include "Air_Instrument.h" 
#include <iostream>

using namespace std ; 

class NoteAirInstrument : public Note {
    protected : 

    public : 
        NoteAirInstrument() ; 
        float getNote() ; 

}; 


#endif 