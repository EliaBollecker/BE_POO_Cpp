/*********************************************************************
 * @file  note.h
 * @author <Elia Bollecker-Fevre et Elise Weltzer>
 * @brief Fichier header de Note permet de stocker toutes les notes possibles 
 *********************************************************************/
#ifndef NOTE_H
#define NOTE_H
#include <iostream>

//la class note permet de définir toutes les constantes des notes jouables en fréquences (Hz)
class Note {
    protected : 
    //notes 
        float const do1 = 261.63; 
        float const re = 293.66; 
        float const mi = 329.63 ; 
        float const fa = 349.23; 
        float const sol  = 392; 
        float const la = 440 ; 
        float const si = 493.88; 
        float const do2 = 523.25; 
    //mesure 
        float mesure ; 
    public : 

        virtual float getNote() = 0 ; //methode abstraite permettant d'avoir la note en fonction de la mesure 

};


#endif 