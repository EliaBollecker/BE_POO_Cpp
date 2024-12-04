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
    //erreur 
        static const int err1=1 ; //problème dans la mesure de distance : distance négative avec ultrasonic ranger 
        static const int err2=2 ; //problème dans la mesure de ditance : distance trop grande avec ultrasonic ranger 
        static const int err3=3 ; //problème dans la mesure de l'angle : angle négatif avec potetiomètre
        static const int err4=4 ; //problème dans la mesure de l'angle : angle >198 cad limite maxdu potentiomètre
    public : 
        Note(long mesure){this->mesure=mesure ; } 
        virtual float getNote() = 0 ; //methode abstraite permettant d'avoir la note en fonction de la mesure 

};


#endif 
