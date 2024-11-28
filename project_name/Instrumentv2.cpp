/*********************************************************************
 * @file  Instrument.cpp
 * @author <Elia Bollecker-Fevre et Elise Weltzer>
 * @brief Fichier code de Instrument, défini un instrument, sa mesure, son type de mesure (angle ou distance)
 *********************************************************************/


#include "Instrumentv2.h"

Instrument::Instrument(){
    //mesure=0;
    //type_mesure='.';
}

char Instrument::get_type_mesure(){
    return type_mesure ;
}

void Instrument::setMesure(float mesure){
    this->mesure=mesure ; 
}