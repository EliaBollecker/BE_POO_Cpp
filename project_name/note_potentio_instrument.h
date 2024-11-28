/*********************************************************************
 * @file  note_potentio_instrument.h
 * @author <Elia Bollecker-Fevre et Elise Weltzer>
 * @brief Fichier header de Note_potentio_instrument permet de renvoyer la bonne note pour le potentio instrument 
 * @note hérite de la classe note 
 *********************************************************************/

 #ifndef NOTEPOTENTIOINSTRUMENT_H
#define NOTEPOTENTIOINSTRUMENT_H 

#include "note.h"
#include "PotentioInstrument.h" 
#include "Instrumentv2.h" 
#include <iostream>

using namespace std ; 

class NotePotentioInstrument : public Note {

protected :

public :
    NotePotentioInstrument(long mesure);
    float getNote() ; //traduit l'angle mesure en note 


} ;




#endif