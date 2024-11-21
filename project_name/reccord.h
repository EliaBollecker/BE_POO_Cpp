/*********************************************************************
 * @file  reccord.h
 * @author <Elia Bollecker-Fevre et Elise Weltzer>
 * @brief Fichier h de reccord permet de sauvegarde et jouer une sequence de notes
 *********************************************************************/

#ifndef RECCORD_H
#define RECCORD_H

#include <vector> 
#include "note_air_instrument.h"

using namespace std ; 

class Reccord {
    private : 
        vector<float> Partition ; //vector ou sont stockee les notes en Hz  
        int dim  ; //dimension du vector 
        Instrument * instrument ; // instrument en train d'enregsitrer
    public : 
        Reccord(Instrument * instrument) ; //permet de recuêrer les notes de l'instrument 
        void enregistrer() ; //enregistre une sequence de 10 notes dans un vecteur 
        void jouer() ; //permet d'AFFICHER les frequences des notes enregistrees 

        vector<float> getParittion() ; //getter du vecteur de note 
        int getDim() ; //getter de la dimension 
        ~Reccord() ; //destructeur 

};

#endif 