/*********************************************************************
 * @file  note.h
 * @author <Elia Bollecker-Fevre et Elise Weltzer>
 * @brief Fichier code de Note_air_instrument permet de renvoyer la bonne note pour l'air instrument  
 *********************************************************************/

#include "note_air_instrument.h" 

//using namespace NoteAirInstrument ; 

NoteAirInstrument::NoteAirInstrument(float mesure):Note(mesure){
    
}

float NoteAirInstrument::getNote(){
    //this->mesure = instrument.mesure ; 
    if (mesure<0){
        cout<<"problem"<<endl ; 
        return 0.0 ; 
    }
    else if (mesure <= 5.00){
        return do1 ; 
    }
    else if (mesure <= 10.00){
        return re ; 
    }
    else if (mesure <= 15.00){
        return mi ; 
    }
    else if (mesure <= 20.00){
        return fa ; 
    }
     else if (mesure <= 25.00){
        return sol ; 
    }
    else if (mesure <= 30.00){
        return la ; 
    }
     else if (mesure <= 35.00){
        return si ; 
    }
    else if (mesure <= 40.00){
        return do2 ; 
    }
    else {
        cout<<"problem 2"<<endl ; 
        return 0.0 ; 
    }
}




