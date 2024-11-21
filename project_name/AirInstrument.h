#ifndef AIRINSTRUMENT_H 
#define AIRINSTRUMENT_H

#include "Instrumentv2.h"
#include "note_air_instrument.h" 


class AirInstrument : public Instrument {
  //friend class NoteAirInstrument 
protected :

public :
  AirInstrument();
  float get_mesure();
  friend class NoteAirInstrument ; 
  void mesurerDistance() ; //sert a stocker le resultat renvoye par le capteur /*A FAIRE */
  float lierNoteMesure() ; //sert a renvoyer une note de musique grace a la distance 
  //friend NoteAirInstrument::NoteAirInstrumsent() ; 
};
#endif 