#ifndef NOTE_H
#define NOTE_H
//autrices Elia Bollecker-Fevre et Elise Weltzer 
#include <iostream>

//la class note permet de définir toutes les constantes des notes jouables en fréquences (Hz)
class note {
    protected : 
        float const do1 = 261.63; 
        float const re = 293.66; 
        float const mi = 329.63 ; 
        float const fa = 349.23; 
        float const sol  = 392; 
        float const la = 440 ; 
        float const si = 493.88; 
        float const do2 = 523.25; 
    public : 

        virtual float getNote(float mesure) = 0 ; //methode abstraite permettant d'avoir la note en fonction de la mesure 

};


#endif 