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