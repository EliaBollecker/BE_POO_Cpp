#include "Instrument.h"



Instrument::Instrument(){
    mesure=0;
    type_mesure='.';
}

char Instrument::get_type_mesure(){
    return type_mesure ;
}