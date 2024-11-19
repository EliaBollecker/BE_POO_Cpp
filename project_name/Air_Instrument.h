/* Classe Air_Instrument
autrices : Elia Bollecker-Fevre et Elise Weltzer
Hérite de Instrument
Défini l'instrument utilisant le capteur ultrason
la distance au capteur va définir la note jouée par le buzzer
*/


#ifndef AIR_INSTRUMENT_H_
#define AIR_INSTRUMENT_H_

#include "Instrument.h"

class Air_Instrument : public Instrument {
// friend class NoteAirInstrument ;
protected :

public :
  Air_Instrument();
  float get_mesure();


};
















#endif