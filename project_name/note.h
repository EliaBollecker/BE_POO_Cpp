/*********************************************************************
 * @file  note.h
 * @author <Elia Bollecker-Fevre et Elise Weltzer>
 * @brief Fichier header de Note permet de stocker toutes les notes possibles 
 *********************************************************************/
#ifndef NOTE_H
#define NOTE_H
//#include <iostream>
#include <Arduino.h>

//la class note permet de définir toutes les constantes des notes jouables en fréquences (Hz)
class Note {
    protected : 
    //definition des frequences des notes en Hz
        float const do1 = 523; 
        float const re = 587; 
        float const mi = 659; 
        float const fa = 698; 
        float const sol  = 784; 
        float const la = 880 ; 
        float const si =988; 
        float const do2 = 1047; 
    //mesure 
        long mesure ; 
    public : 
        Note(long mesure){this->mesure=mesure ; } 
        virtual float getNote() = 0 ; //methode abstraite permettant d'avoir la note en fonction de la mesure 

};


#endif 
