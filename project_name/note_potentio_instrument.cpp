/*********************************************************************
 * @file  note_potentio_instrument.cpp
 * @author <Elia Bollecker-Fevre et Elise Weltzer>
 * @brief Fichier hcode de Note_potentio_instrument permet de renvoyer la bonne note pour le potentio instrument 
 * @note hérite de la classe note 
 *********************************************************************/

 #include "note_potentio_instrument.h"
 //#include <iostream>


 NotePotentioInstrument::NotePotentioInstrument(long mesure):Note(mesure){
    
}

float NotePotentioInstrument::getNote(){
    if (mesure<0){
        //Serial.println("Problem distance trop petite" ) ;
        throw err3 ; 
        return 0.0 ; 
    }
    else if (mesure <= 24){
        return do1 ; 
    }
    else if (mesure <= 48){
        return re ; 
    }
    else if (mesure <= 72){
        return mi ; 
    }
    else if (mesure <= 96){
        return fa ; 
    }
     else if (mesure <= 120){
        return sol ; 
    }
    else if (mesure <= 145){
        return la ; 
    }
     else if (mesure <= 170){
        return si ; 
    }
    else if (mesure <= 198){
        return do2 ; 
    }
    else {
        //Serial.println("Problem distance trop grande" ) ;
        throw err4; 
        return 0.0 ; 
    }
}
