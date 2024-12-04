
/*********************************************************************
 * @file  reccord.h
 * @author <Elia Bollecker-Fevre et Elise Weltzer>
 * @brief Fichier h de reccord permet de sauvegarde et jouer une sequence de notes
 *********************************************************************/

#ifndef RECCORD_H
#define RECCORD_H

#include <cppQueue.h>
#include "note_air_instrument.h"
#include <Arduino.h>

using namespace std ; 

class Reccord {
    private : 
        static const int err5=5 ; //problème dans l'enregistrement de la séquence : pas de notes enregistrée
        //queue<float> Partition ; //queue ou sont stockee les notes en Hz  
        const size_t taille= sizeof(float) ; 
        //cppQueue Partition; //(taille, 10, LIFO, false) ; 
        static cppQueue Partition ; //definition en statique pour que la cppSQueue marche sur l'Arduino sinon erreurs imposible à resoudre (même chatgpt n'a pas su)
        int dim  ; //dimension du vector 
        Instrument * instrument ; // instrument en train d'enregsitrer
    public : 
        Reccord(Instrument * instrument) ; //permet de recuêrer les notes de l'instrument 
        void enregistrer() ; //enregistre une sequence de 10 notes dans un vecteur 
        void jouer() ; //permet d'AFFICHER les frequences des notes enregistrees 

        cppQueue getParittion() ; //getter du vecteur de note 
        int getDim() ; //getter de la dimension 
        ~Reccord() ; //destructeur 

};

#endif 
