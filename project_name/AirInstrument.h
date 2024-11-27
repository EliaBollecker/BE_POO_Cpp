#ifndef AIRINSTRUMENT_H 
#define AIRINSTRUMENT_H

#include "Instrumentv2.h"
#include "note_air_instrument.h" 


class AirInstrument : public Instrument {
  //friend class NoteAirInstrument 
protected :

public :
  friend class NoteAirInstrument ; 
  AirInstrument();
  void mesureCapteur();//sert a stocker le resultat renvoye par le capteur dans la variable mesure
  float lierNoteMesure() ; //sert a renvoyer une note de musique grace a la distance 
  //friend NoteAirInstrument::NoteAirInstrumsent() ; 
};
#endif 