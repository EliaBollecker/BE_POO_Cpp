/*********************************************************************
 * @file  reccord.cpp
 * @author <Elia Bollecker-Fevre et Elise Weltzer>
 * @brief Fichier code de reccord permet de sauvegarde et jouer une sequence de notes
 *********************************************************************/

#include "reccord.h" 
#include <iostream>
#include <thread>
#include <chrono> 

using namespace std ; 

Reccord::Reccord(Instrument * instrument) {
    this->instrument=instrument ; 
}

void Reccord::enregistrer() {
    for (dim=0 ; dim<10 ; dim++){ //a cahnger avec le bouton 
        Partition.push_back(instrument->lierNoteMesure()); 
        this_thread::sleep_for(chrono::seconds(2)) ; //attendre 2s avant le prochain enregsitrement 
        instrument->setMesure(25) ; //pour le test 
    }
}
void Reccord::jouer()  {
    int dim_prov = 0 ; 
    while(dim_prov < dim){
         
        cout<<Partition.at(dim_prov)<<endl ; //a remplacer par envoyer au buzzer 
        dim_prov++ ;
    }
}

vector<float> Reccord::getParittion() {
    return Partition ; 
}
    
int Reccord::getDim(){
    return dim ; 
}
Reccord::~Reccord() {
    //delete instrument ; 
    Partition.clear() ;  
}