/*********************************************************************
 * @file  reccord.cpp
 * @author <Elia Bollecker-Fevre et Elise Weltzer>
 * @brief Fichier code de reccord permet de sauvegarde et jouer une sequence de notes
 *********************************************************************/

#include "reccord.h" 
//#include <iostream>
//#include <thread>
//#include <chrono> 
#include <Arduino.h>
//#include "GroveBuzzer.h" 

using namespace std ; 

cppQueue Reccord::Partition(sizeof(float),10,LIFO,false,NULL,0) ;

Reccord::Reccord(Instrument * instrument){
    this->instrument=instrument ; 
}

void Reccord::enregistrer() {
    for (dim=0 ; dim<10 ; dim++){ //a cahnger avec le bouton 
        float  var =instrument->lierNoteMesure() ; 
        bool p=Partition.push(&var); 
        //this_thread::sleep_for(chrono::seconds(2)) ; //attendre 2s avant le prochain enregsitrement 
        delay(2000) ; 
        //instrument->setMesure(25) ; //pour le test 
    }
}
void Reccord::jouer()  {
    if (Partition.isEmpty()){
      throw err5 ; 
    }
    while(!Partition.isEmpty()){
        //Partition.pop() ; 
        float var ; 
        bool p=Partition.pop(&var) ; 
        Serial.println(var) ; 
        tone(0,var,2000) ;//D3=GPIO0 
        delay(2000) ; 
        noTone(0) ; 
        
    }
}

cppQueue Reccord::getParittion() {
    return Partition ; 
}
    
int Reccord::getDim(){
    return dim ; 
}
Reccord::~Reccord() {
    //delete instrument ; 
    /*while(!Partition.isEmpty()){
        bool p=Partition.pop() ; 
    }*/
    Partition.clean() ; 
    //Partition.clear() ;  
}
