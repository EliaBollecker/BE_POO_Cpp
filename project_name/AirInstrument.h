#ifndef AIRINSTRUMENT_H 
#define AIRINSTRUMENT_H

#include "Instrumentv2.h"
#include "note_air_instrument.h" 
//#include "Arduino_GroveI2C_Ultrasonic.h"
#include "Ultrasonic.h"


class AirInstrument : public Instrument {
  //friend class NoteAirInstrument 
  Ultrasonic ultrasonic; // on relie le capteur à la pin D7(GPIO13)
protected :

public :
  friend class NoteAirInstrument ; 
  AirInstrument();
  void AirInstrument_init() ; 
  void mesureCapteur();//sert a stocker le resultat renvoye par le capteur dans la variable mesure
  float lierNoteMesure() ; //sert a renvoyer une note de musique grace a la distance 
  //friend NoteAirInstrument::NoteAirInstrumsent() ; 
};
#endif 
