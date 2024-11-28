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
        cout<<"problem"<<endl ; 
        return 0.0 ; 
    }
    else if (mesure <= 37){
        return do1 ; 
    }
    else if (mesure <= 74){
        return re ; 
    }
    else if (mesure <= 111){
        return mi ; 
    }
    else if (mesure <= 148){
        return fa ; 
    }
     else if (mesure <= 185){
        return sol ; 
    }
    else if (mesure <= 222){
        return la ; 
    }
     else if (mesure <= 259){
        return si ; 
    }
    else if (mesure <= 300){
        return do2 ; 
    }
    else {
        cout<<"problem 2"<<endl ; 
        return 0.0 ; 
    }
}
